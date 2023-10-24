use venda;

SELECT * from nota;
desc nota;
desc cliente;

INSERT into cliente values ('João', null, 'Rua da Alegria');
desc nota;
INSERT into nota values (null, '2023-10-23', 1, 1);

SELECT * from nota NATURAL JOIN vendedor WHERE vendedor.codven=nota.codven;

/* 

OUTER JOIN - quando há informação nula em uma relação e não-nula em outra.

	EX : Médico que não possui consulta está em MÉDICO, mas não está em CONSULTA. (chave estrangeira não está em CONSULTA)
    
    LEFT OUTER JOIN - traz todos os dados da tabela da esquerda, não importando o que haja na direita
    RIGHT OUTER JOIN - traz todos os dados da tabela da direita, não importando o que haja na esquerda
    FULL OUTER JOIN - traz todos os dados de ambas as tabelas
    
    */
    
/* UNION - relação1 UNION relação2
	EX: 
		SELECT nome, email, 'P' as tipo */
        
SELECT nomven, 'v' as tipo FROM vendedor UNION SELECT nomcli, 'c' as tipo FROM cliente ORDER BY tipo;