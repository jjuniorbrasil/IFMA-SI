Create table if not exists cliente
(codcli int not null auto_increment primary key,
nomcli varchar(30), endcli varchar(100))
engine=InnoDB
auto_increment=1
comment='Cadastro de Cliente';

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

describe cliente;
show columns from cliente;

describe produto;
show columns from produto;

describe vendedor;
show columns from vendedor;