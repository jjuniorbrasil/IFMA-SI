# 01

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

# 02

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
    
# 03
    
alter table hotel modify tiphot varchar(50),
	change column nomhot nomehot varchar(50),
    add column endhot varchar(30),
    drop prehot;
    
alter table hotel add column prehot double;

SET SQL_SAFE_UPDATES = 0;

# 04

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

/*10*/

select nompai from pais where nomcon = 'Ásia' and (year(datind) between '2001' and '2100');

/*11*/

select nompai from pais where linpai = 'Português';

/*12*/

select nompai from pais where linpai = 'Português' and nomcon = 'África';

/*12*/

select nomcid from cidade where nompai = 'Brasil';

/*14*/

select sum(popcon) as Populacao_Mundial from continente;

/*15*/

select count(codcid) from cidade where nomcid = 'São Luís';

/*16*/

select nompai from pais natural join cidade natural join hotel where prehot= (select min(prehot) from hotel);

/*17*/

select nomehot from hotel natural join cidade where tiphot = 'Super Luxo' and nomcid = 'São Luís';

/*18*/ 

SET SQL_SAFE_UPDATES = 0;
update hotel set prehot=2000 where nomehot='Eiffel Palace';
INSERT INTO hotel (codcid, nomehot, tiphot, prehot) values (4, 'Hotel Croissant', 'Super Luxo', 400.00);
select avg(prehot) from hotel natural join cidade where nomcid='Paris'; 

/*19*/  

select avg(prehot) from hotel natural join cidade where nompai='França'; 

/*20*/ 

select nomcon , count(codhot) from hotel natural join cidade natural join continente where tiphot='Luxo' group by nomcon;

/*21*/ 
select nompai from hotel natural join cidade where nompai in(select nompai from hotel natural join cidade where tiphot='Super Luxo');
/*22*/ 
select regpai, count(nompai) from pais where regpai in ('Miliar', 'Republicanos', 'Monárquicos') group by regpai; 
/*23*/
select regpai, count(nompai) from pais where regpai in ('Miliar', 'Republicanos', 'Monárquicos') and nomcon = 'Europa' group by regpai; 
/*24*/ 

SELECT linpai, COUNT(nompai) FROM pais GROUP BY linpai HAVING COUNT(nompai) = (SELECT MAX(total) FROM (SELECT linpai, COUNT(nompai) as total FROM pais GROUP BY linpai) AS subquery);

/*25*/

select linpai from pais where poppai = (select max(poppai) from pais);

/*26*/

select nomehot from hotel natural join cidade where nompai = 'Argentina' and prehot = (select max(prehot) from hotel);

/*27*/

select nompai, sum(poppai) from pais natural join cidade natural join hotel where prehot>30 and moepai='USD' group by nompai having count(codhot) > 50;

/*28*/

select nompai,poppai/areapai as densidade from pais having max(densidade);

/*29*/

select nompai,poppai/areapai as densidade from pais where nomcon='Europa' having max(densidade);

/*30*/

select nomhot from hotel, cidade, pais where hotel.codcid = cidade.codcid and cidade.nompai = pais.nompai and prehot BETWEEN 40 and 50 and pais.nompai = 'Inglaterra';

/*31*/

select prepai from pais natural join (select nompai, count(codhot) from pais natural join cidade natural join hotel group by nompai order by count(codhot) limit 1) as subquery;

/*32*/

select nompai from pais where datind = (select max(datind) from pais where nomcon = 'America Latina');

/*33*/

SELECT nomhot, MIN(prehot) AS MenorPreco
FROM hotel
NATURAL JOIN (
    SELECT codhot
    FROM hotel
    NATURAL JOIN cidade
    WHERE MONTH(datani) = 4
) AS subquery
GROUP BY nomhot;

/*34*/

select sum(poppai) from pais where linpai = 'Francês';

/*35*/

select max(prehot) from hotel natural join cidade natural join pais 
natural join 
(select nomcon 
from continente 
where arecon = 
(select min(arecon) from continente)) as cont;

/*36*/

SELECT nompai, COUNT(codhot) AS total
FROM pais
NATURAL JOIN cidade
NATURAL JOIN hotel
GROUP BY nompai
HAVING COUNT(codhot) = (
    SELECT MAX(total_hotels)
    FROM (
        SELECT COUNT(codhot) AS total_hotels
        FROM pais
        NATURAL JOIN cidade
        NATURAL JOIN hotel
        GROUP BY nompai
    ) AS subquery
) limit 1;