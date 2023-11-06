use intranet;

SELECT razaosocial as 'Nome Fantasia' from tbempresas;
select count(ne) from tbempenhos;
select sum(qtd*vlunitario) from tbdetempenho;  
select descricao from tbdetempenho where vlunitario = (Select max(vlunitario) from tbdetempenho); 
select descricao from tbdetempenho where vlunitario = (Select min(vlunitario) from tbdetempenho); 
select razaosocial,tbempenhos.cnpj from tbempenhos,tbempresas where tbempenhos.cnpj=tbempresas.cnpj and data='2004-08=23'; 
select vlunitario,count(vlunitario) from tbdetempenho group by vlunitario having count(vlunitario)>3;
select descricao,vlunitario from tbdetempenho where descricao LIKE '%papel%' order by descricao;
select descricao from tbdetempenho limit 5,3;
select descricao from tbempresas natural join tbempenhos natural join tbdetempenho where tbempresas.razaosocial='R. M. CAMPOS DE OLIVEIRA';   
select cnpj from tbempenhos where data =(select data from tbempresas natural join tbempenhos where tbempresas.cnpj ="41492604000180");  
select tbempenhos.cnpj from tbempresas right join tbempenhos on tbempresas.cnpj = tbempenhos.cnpj where tbempresas.cnpj is null; 

select distinct cnpj, razaosocial 
from tbempresas 
natural join tbempenhos 
natural join tbdetempenho 
where tbdetempenho.ne = tbempenhos.ne and tbdetempenho.qtd > 3;

/*Exercício 1* - Cadastrar uma empresa de nome Shopping São Luís e CNPJ 987654321-10.*/
INSERT into tbempresas values ('987654321-10', 'Shopping São Luís');

/*Exercício 2 - Cadastrar uma compra de código 2005NE000001 no Shopping São Luís, no dia 02/06/2005.*/
Insert into tbempenhos values ('2005NE000001', '987654321-10', '2005-06-02');

/*Exercício 3 - Cadastrar, para a compra acima, os seguintes itens:
Item 1: 01(uma) Estante em Madeira no valor de R$500,00
Item 2: 05(cinco) Aparelhos de DVD no valor de R$420,00(cada)*/
insert into tbdetempenho values ('2005NE000001', 1, 'Estante em Madeira', 1, 500.0);
insert into tbdetempenho values ('2005NE000001', 2, 'Aparelho de DVD', 5, 420.0);

/*Exercício 4 - Obter o total de compras realizadas por esse órgão.*/
SELECT razaosocial, COUNT(ne) FROM tbempenhos,tbempresas WHERE tbempenhos.cnpj = '987654321-10' and tbempenhos.cnpj = tbempresas.cnpj;

/*Exercício 5 - Obter o total de compras realizadas por esse órgão no ano de 2003 e em 2005.*/
SELECT razaosocial as Nome, COUNT(ne) as 'Total Compras'
FROM tbempenhos NATURAL JOIN tbempresas
WHERE tbempenhos.cnpj = '987654321-10' 
and ((tbempenhos.data BETWEEN '2003-01-01' and '2003-12-31') OR (tbempenhos.data BETWEEN '2005-01-01' and '2005-12-31'));

/*Exercício 6 - Obter o total de compras realizadas por esse órgão no período de 2002 a 2003.*/
Select razaosocial as nome, count(ne) from tbempenhos natural join tbempresas where cnpj='987654321-10' and tbempenhos.data between'2002-01-01' and '2003-12-31' ;

/*Exercício 7 - Obter a relação de empresas(incluir o cnpj relação) ordenadas alfabeticamente pelo nome */
select razaosocial as nome , cnpj from tbempresas order by nome asc;

/*8. Obter a relação de empresas(incluir o cnpj) ordenadas pelo cnpj*/
select cnpj, razaosocial as nome from tbempresas order by cnpj;

/*9. Obter uma relação com o nome das empresas que venderam para este órgão no ano de 2003.*/
select razaosocial from tbempresas natural join tbempenhos where year(data)='2003';

/*10. Obter o total de vendas realizada pela empresa de cnpj 04577932000152.*/
select count(ne), razaosocial as nome from tbempenhos, tbempresas where tbempenhos.cnpj=tbempresas.cnpj and tbempenhos.cnpj='04577932000152';

/*11. Mudar o nome do Shopping São Luís(cadastrado no início) para Shopping Tropical */
UPDATE tbempresas SET razaosocial = 'Shopping Tropical' where cnpj = '987654321-10';

/*12. Obter o número de empresas cadastradas.*/
select count(cnpj) from tbempresas;

/*13. Obter o número de empresas do tipo LTDA cadastradas. Essas empresas sempre possuem a palavra LTDA no seu nome.*/
select razaosocial as nome, cnpj from tbempresas where razaosocial like '%LTDA%';

/*14. Obter o número de compras realizadas no ano de 2003.*/
select count(ne) from tbempenhos where year(data)='2003';

/*15. Obter o valor médio dos produtos comprados.*/
select avg(vlunitario) from tbdetempenho where tbdetempenho.ne in (select ne from tbempenhos);

/*16. Obter o maior valor pago a um produto.*/
select max(vlunitario) from tbdetempenho where tbdetempenho.ne in (select ne from tbempenhos);

/*17. Obter o menor valor pago a um produto.*/
select min(vlunitario) from tbdetempenho where tbdetempenho.ne in (select ne from tbempenhos);

/*18. Obter o nome do produto mais barato.*/
select descricao from tbdetempenho where vlunitario=(select min(vlunitario) from tbdetempenho where tbdetempenho.ne in (select ne from tbempenhos));

/*19. Obter relação de todas as compras realizadas, com o valor total de cada uma.*/
select ne as compra, SUM(vlunitario) from tbdetempenho group by ne;

/*20. Obter relação de todas as compras realizadas, com o valor total de cada uma. O resultado deve
estar ordenado por ordem crescente do valor das compras.*/
select ne as compra, SUM(vlunitario) as soma from tbdetempenho group by ne order by soma asc;

/*21. Obter o valor unitário de todas as pastas, ordenado pelo valor.*/
select vlunitario,descricao from tbdetempenho where descricao like '%pasta%' order by vlunitario asc;