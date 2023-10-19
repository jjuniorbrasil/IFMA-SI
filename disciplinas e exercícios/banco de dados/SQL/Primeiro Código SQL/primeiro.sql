Create table if not exists cliente
(codcli int not null auto_increment primary key,
nomcli varchar(30), endcli varchar(100))
engine=InnoDB
auto_increment=1
comment='Cadastro de Cliente';

/* not null = não nulo
auto_increment = aumenta a cada instância
engine = motor utilizado, no caso InnoDB */

create table if not exists vendedor
(codven int not null auto_increment primary key,
nomven varchar(30))
engine=InnoDB
auto_increment=1
comment='Cadastro do Vendedor';

create table if not exists produto
(codpro int not null auto_increment primary key,
despro varchar(100),
unipro int)
engine=InnoDB
auto_increment=1
comment='Cadastro do Produto';

Create table if not exists nota
(codnot int not null auto_increment primary key,
datnot date,
codcli int not null,
foreign key (codcli) references cliente(codcli),
codven int not null,
foreign key (codven) references vendedor(codven))

engine=InnoDB,
auto_increment=1,
comment='Cadastro de Nota';

Create table if not exists item
(codnot int not null references nota(codnot),
codpro int not null references produto(codpro),
preite double,
quaite int,
primary key (codnot, codpro))									/*Chave primária composta*/
engine=InnoDB,
comment='Cadastro de Item';

create table if not exists teste
(codtes int not null auto_increment
primary key,
nomtes varchar(30))
engine=InnoDB,
auto_increment=1,
comment='Cadastro de Teste';

alter table cliente add column idacli int; 						/*Add column: para adicionar coluna à tabela*/

desc cliente;	/* Igual ao DESCRIBE ou SHOW COLUMNS */

alter table cliente drop column idacli;							/* Drop column: para apagar a coluna */
alter table cliente modify column endcli varchar(150);  		/* Modify: para alterar tamanho/tipo de dado */
alter table cliente change column endcli cliend varchar(80); 	/* Change: muda nome e tamanho do tipo de dado - primeiro o nome atual e depois o novo*/
alter table cliente change column cliend endcli varchar(80);

alter table cliente rename as tbcliente; 						/*RENAME AS: Renomeia a tabela*/
/*ou*/
RENAME TABLE tbcliente TO cliente;

			/*ALTERAR ORDEM DAS COLUNAS*/

alter table cliente modify nomcli varchar(30) after endcli; /*Após*/
alter table cliente modify nomcli varchar(30) first; /*Em primeiro*/

show columns from cliente;

			/* ÍNDICES */
            
create index nomcli on cliente(nomcli); /* Nome do índice = coluna do atributo para facilitar, a fim de não decorar informação */

desc cliente;							/* Mostra NULL */
show index from cliente;				/* Mostra as colunas da tabela que possuem índice associado */

drop index nomcli on cliente;			/* Deletar índice */

show index from cliente;

create index par_nomcli on cliente(nomcli(3)); /* Índice particionado para as primeiras três letras de 'nomcli' em 'cliente */

show index from cliente;
drop index par_nomcli on cliente;

alter table cliente add index nomcli(nomcli); 	/* Forma alternativa de adicionar um índice */

show index from cliente;
alter table cliente drop index nomcli;			/* Forma alternativa de remover um índice */

show index from cliente;

/* INSERT, DELETE, UPDATE E SELECT - COMANDOS DE MANIPULAÇÃO DE DADOS */

	/* Insert - inserir dados nas relações/tabelas já criadas*/
    
INSERT into vendedor values (null, 'João'), (null, 'Maria'), (null, 'José'); /* NULL para o código, pois a relação possui auto-increment. */

SELECT * FROM vendedor; /* '*' para todas as tuplas */
DELETE from vendedor;	/* DELETA dados da tabela */
DELETE from vendedor where nomven = 'Maria';

TRUNCATE table vendedor;	/*Deleta dados alternativamente*/

SELECT * FROM vendedor;

Update vendedor set nomven='Clara' where codven = 3;

SELECT * FROM vendedor;

/*SELECT = PROJEÇÃO/PI
WHERE = SELEÇÃO/CONDIÇÕES/SIGMA
FROM = TABELA*/

					/*SELECT [DISTINCT = elimina repetição | DISTINCTROW | ALL]*/
    
SELECT DISTINCT nomven FROM vendedor;

	/* GROUP BY = agrupar por coluna de atributo (XI)
		ORDER BY = ordenar (asc ou desc)
			HAVING WHERE_DEFINITION ... SOMA, CONTA, MÁXIMO, MÍNIMO 
				ORDER BY ATRIBUTOS
					LIMIT ROWS*/