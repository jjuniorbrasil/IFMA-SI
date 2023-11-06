create database hoteis;

use hoteis;

create table if not exists continente
(nomcon varchar(30) not null primary key,
popcon int,
arecon double)
engine = InnoDB
comment='Cadastro dos Continentes';

create table if not exists pais
(nompai varchar(30) not null primary key,
nomcon varchar(30) not null,
foreign key (nomcon) references continente(nomcon),
cappai varchar(30),
linpai varchar(30),
moepai varchar(30),
prepai varchar(30),
poppai int,
areapai double,
regpai varchar(30))
engine = InnoDB,
comment='Cadastro dos Países';

create table if not exists cidade
(codcid int not null auto_increment primary key,
nompai varchar(30),
foreign key (nompai) references pais(nompai),
nomcid varchar(30),
popcid int,
datani date)
engine=InnoDB,
auto_increment=1;

create table if not exists hotel
(codhot int not null auto_increment primary key,
codcid int,
foreign key (codcid) references cidade(codcid),
nomhot varchar(30),
tiphot varchar(30),
prehot double)
auto_increment = 1,
comment='Cadastro dos Hotéis';

INSERT INTO continente
VALUES
    ('África', 123456789, 30370000.0),
    ('Ásia', 456789012, 44579000.0),
    ('América', 789012345, 42360000.0),
    ('Europa', 234567890, 10180000.0);
    
INSERT INTO pais (nompai, nomcon, cappai, linpai, moepai, prepai, poppai, areapai, regpai)
VALUES
    ('Brasil', 'América', 'Brasília', 'Português', 'Real', 'BRL', 211049527, 8515767.0, 'América do Sul'),
    ('China', 'Ásia', 'Pequim', 'Chinês', 'Yuan', 'CNY', 1393409037, 9596960.0, 'Ásia Oriental'),
    ('Egito', 'África', 'Cairo', 'Árabe', 'Libra Egípcia', 'EGP', 91277290, 1002450.0, 'Norte da África'),
    ('França', 'Europa', 'Paris', 'Francês', 'Euro', 'EUR', 66987244, 551695.0, 'Europa Ocidental');

INSERT INTO cidade (nompai, nomcid, popcid, datani)
VALUES
    ('Brasil', 'Rio de Janeiro', 6718903, '1763-03-1'),
    ('China', 'Pequim', 21540000, '1949-10-1'),
    ('Egito', 'Cairo', 9503497, '969-05-1'),
    ('França', 'Paris', 2175601, '508-02-1');
    
INSERT INTO hotel (codcid, nomhot, tiphot, prehot)
VALUES
    (1, 'Hotel Copacabana', 'Luxo', 300.00),
    (2, 'Grand Hotel', 'Padrão', 150.00),
    (3, 'Nile Hilton', 'Luxo', 250.00),
    (4, 'Eiffel Palace', 'Super Luxo', 400.00);
    
alter table hotel modify tiphot varchar(50),
	change column nomhot nomehot varchar(50),
    add column endhot varchar(30),
    drop prehot;
    
alter table hotel add column prehot double;

SET SQL_SAFE_UPDATES = 0;

update cidade set nomcid = 'São Luís' where nomcid = 'Rio de Janeiro';
update continente set popcon=0 where nomcon = 'Ásia';
update cidade set nomcid = 'Cazequistão', datani = '969-05-1' where nomcid='Egito';
update hotel set nomehot = 'Hotel São Luís', tiphot='Super Luxo', prehot=1000.00 where codcid = 2;

SET SQL_SAFE_UPDATES = 1;

/*5*/

SELECT nompai from pais;

/*6*/

alter table pais add column datind date;

select nompai, datind from pais;

/*7*/

select nomcon from continente;

/*8*/

select nompai,nomcon from pais;

/*9*/

INSERT INTO pais (nompai, nomcon, cappai, linpai, moepai, prepai, poppai, areapai, regpai)
VALUES ('Finlândia', 'Europa', 'Helsinque', 'Finlandês', 'Euro', 'EUR', 5515520, 338424.0, 'Europa Setentrional');

select cappai from pais where nompai='Finlândia';
    


