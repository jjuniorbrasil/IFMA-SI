create database vias;

use vias;

create table if not exists cidade
(cidadeid int not null primary key auto_increment,
nome varchar(100))
engine = InnoDB,
auto_increment = 1,
comment='Registro das Cidades';

CREATE TABLE IF NOT EXISTS estrada
(estradaid int not null primary key auto_increment,
nome varchar(100),
cidade_origem int,
cidade_destino int,
foreign key (cidade_origem) references cidade(cidadeid),
foreign key (cidade_destino) references cidade(cidadeid),
extensao_km int)
engine = InnoDB,
auto_increment = 1,
comment='Registro das Estradas';

CREATE TABLE IF NOT EXISTS trajeto
(trajetoid int not null primary key auto_increment,
cidade_origem int,
cidade_destino int,
foreign key (cidade_origem) references cidade(cidadeid),
foreign key (cidade_destino) references cidade(cidadeid))
engine = InnoDB,
auto_increment=1,
comment='Registro dos Trajetos';

create table if not exists segmento
(trajetoid int, estradaid int,
PRIMARY KEY(trajetoid, estradaid),
foreign key (trajetoid) references trajeto(trajetoid),
foreign key (estradaid) references estrada(estradaid),
ordem int);

INSERT INTO cidade (nome) VALUES
('São Paulo'),
('Rio de Janeiro'),
('Belo Horizonte'),
('Brasília'),
('Salvador'),
('Curitiba'),
('Fortaleza'),
('Manaus'),
('Porto Alegre'),
('Recife');

INSERT INTO estrada (nome, cidade_origem, cidade_destino, extensao_km) VALUES
('Rodovia A1', 1, 2, 300),
('Rodovia B2', 3, 4, 250),
('Rodovia C3', 5, 6, 180),
('Rodovia D4', 7, 8, 400),
('Rodovia E5', 9, 10, 150),
('Rodovia F6', 2, 3, 200),
('Rodovia G7', 4, 5, 320),
('Rodovia H8', 6, 7, 280),
('Rodovia I9', 8, 9, 350),
('Rodovia J10', 10, 1, 270);

INSERT INTO trajeto (cidade_origem, cidade_destino) VALUES
(1, 2),
(3, 4),
(5, 6),
(7, 8),
(9, 10),
(2, 3),
(4, 5),
(6, 7),
(8, 9),
(10, 1);

INSERT INTO segmento (trajetoid, estradaid, ordem) VALUES
(1, 1, 1),
(1, 6, 2),
(2, 2, 1),
(2, 7, 2),
(3, 3, 1),
(3, 8, 2),
(4, 4, 1),
(4, 9, 2),
(5, 5, 1),
(5, 10, 2),
(6, 6, 1),
(6, 1, 2),
(7, 7, 1),
(7, 2, 2),
(8, 8, 1),
(8, 3, 2),
(9, 9, 1),
(9, 4, 2),
(10, 10, 1),
(10, 5, 2);

INSERT INTO cidade (nome) VALUES
('Natal'),
('João Pessoa'),
('Florianópolis'),
('Goiânia'),
('Vitória'),
('Cuiabá'),
('Campo Grande'),
('Teresina'),
('São Luís'),
('Aracaju'),
('Maceió'),
('João Pessoa'),
('Palmas'),
('Boa Vista'),
('Rio Branco'),
('Macapá'),
('Porto Velho'),
('Belém'),
('Santarém'),
('Manaus'),
('Anápolis'),
('Uberlândia'),
('Santos'),
('Niterói'),
('Campinas'),
('Ribeirão Preto'),
('Sorocaba'),
('Juiz de Fora'),
('Uberaba'),
('Petrópolis'),
('Campos dos Goytacazes'),
('Volta Redonda'),
('Joinville'),
('Blumenau'),
('Balneário Camboriú'),
('Itajaí'),
('Chapecó'),
('Lages'),
('Criciúma'),
('Palhoça'),
('Brusque'),
('Jaraguá do Sul'),
('São José'),
('Florianópolis'),
('Tubarão'),
('Imbituba'),
('Laguna');

INSERT INTO estrada (nome, cidade_origem, cidade_destino, extensao_km) VALUES
('Rodovia K11', 11, 12, 300),
('Rodovia L12', 13, 14, 250),
('Rodovia M13', 15, 16, 180),
('Rodovia N14', 17, 18, 400),
('Rodovia O15', 19, 20, 150),
('Rodovia P16', 12, 13, 200),
('Rodovia Q17', 14, 15, 320),
('Rodovia R18', 16, 17, 280),
('Rodovia S19', 18, 19, 350),
('Rodovia T20', 20, 11, 270),
('Rodovia U21', 11, 13, 300),
('Rodovia V22', 13, 15, 250),
('Rodovia W23', 15, 17, 180),
('Rodovia X24', 17, 19, 400),
('Rodovia Y25', 19, 11, 150),
('Rodovia Z26', 12, 14, 200),
('Rodovia AA27', 14, 16, 320),
('Rodovia BB28', 16, 18, 280),
('Rodovia CC29', 18, 20, 350),
('Rodovia DD30', 20, 12, 270),
('Rodovia EE31', 11, 14, 300),
('Rodovia FF32', 13, 16, 250),
('Rodovia GG33', 15, 18, 180),
('Rodovia HH34', 17, 20, 400),
('Rodovia II35', 19, 11, 150),
('Rodovia JJ36', 12, 15, 200),
('Rodovia KK37', 14, 17, 320),
('Rodovia LL38', 16, 19, 280),
('Rodovia MM39', 18, 11, 350),
('Rodovia NN40', 20, 12, 270),
('Rodovia OO41', 11, 16, 300),
('Rodovia PP42', 13, 18, 250),
('Rodovia QQ43', 15, 20, 180),
('Rodovia RR44', 17, 11, 400),
('Rodovia SS45', 19, 12, 150),
('Rodovia TT46', 12, 17, 200),
('Rodovia UU47', 14, 19, 320),
('Rodovia VV48', 16, 20, 280),
('Rodovia WW49', 18, 11, 350),
('Rodovia XX50', 20, 13, 270);

INSERT INTO trajeto (cidade_origem, cidade_destino) VALUES
(11, 12),
(13, 14),
(15, 16),
(17, 18),
(19, 20),
(12, 13),
(14, 15),
(16, 17),
(18, 19),
(20, 11),
(11, 13),
(13, 15),
(15, 17),
(17, 19),
(19, 11),
(12, 14),
(14, 16),
(16, 18),
(18, 20),
(20, 12),
(11, 14),
(13, 16),
(15, 18),
(17, 20),
(19, 11),
(12, 15),
(14, 17),
(16, 19),
(18, 11),
(20, 12),
(11, 16),
(13, 18),
(15, 20),
(17, 11),
(19, 12),
(12, 17),
(14, 19),
(16, 20),
(18, 11),
(20, 13),
(11, 12),
(13, 14),
(15, 16),
(17, 18),
(19, 20),
(12, 13),
(14, 15),
(16, 17),
(18, 19),
(20, 11);

INSERT INTO segmento (trajetoid, estradaid, ordem) VALUES
(21, 21, 1),
(21, 26, 2),
(22, 22, 1),
(22, 27, 2),
(23, 23, 1),
(23, 28, 2),
(24, 24, 1),
(24, 29, 2),
(25, 25, 1),
(25, 30, 2),
(26, 26, 1),
(26, 21, 2),
(27, 27, 1),
(27, 22, 2),
(28, 28, 1),
(28, 23, 2),
(29, 29, 1),
(29, 24, 2),
(30, 30, 1),
(30, 25, 2),
(31, 31, 1),
(31, 36, 2),
(32, 32, 1),
(32, 37, 2),
(33, 33, 1),
(33, 38, 2),
(34, 34, 1),
(34, 39, 2),
(35, 35, 1),
(35, 40, 2),
(36, 36, 1),
(36, 31, 2),
(37, 37, 1),
(37, 32, 2),
(38, 38, 1),
(38, 33, 2),
(39, 39, 1),
(39, 34, 2),
(40, 40, 1),
(40, 35, 2),
(41, 41, 1),
(41, 46, 2),
(42, 42, 1),
(42, 47, 2),
(43, 43, 1),
(43, 48, 2),
(44, 44, 1),
(44, 49, 2),
(45, 45, 1),
(45, 50, 2),
(46, 46, 1),
(46, 41, 2),
(47, 47, 1),
(47, 42, 2),
(48, 48, 1),
(48, 43, 2),
(49, 49, 1),
(49, 44, 2),
(50, 50, 1),
(50, 45, 2);


INSERT INTO trajeto (cidade_origem, cidade_destino) VALUES
(1, 3),
(3, 5),
(5, 7),
(7, 9),
(9, 1),
(2, 4),
(4, 6),
(6, 8),
(8, 10),
(10, 2),
(11, 13),
(13, 15),
(15, 17),
(17, 19),
(19, 11),
(12, 14),
(14, 16),
(16, 18),
(18, 20),
(20, 12),
(1, 4),
(3, 6),
(5, 8),
(7, 10),
(9, 2),
(2, 5),
(4, 7),
(6, 9),
(8, 1),
(10, 3),
(11, 14),
(13, 16),
(15, 18),
(17, 20),
(19, 12),
(12, 15),
(14, 17),
(16, 19),
(18, 11),
(20, 13),
(1, 5),
(3, 7),
(5, 9),
(7, 1),
(9, 3),
(2, 6),
(4, 8),
(6, 10),
(8, 2),
(10, 4);

INSERT INTO segmento (trajetoid, estradaid, ordem) VALUES
(51, 1, 1),
(51, 6, 2),
(51, 11, 3),
(52, 2, 1),
(52, 7, 2),
(52, 12, 3),
(53, 3, 1),
(53, 8, 2),
(53, 13, 3),
(54, 4, 1),
(54, 9, 2),
(54, 14, 3),
(55, 5, 1),
(55, 10, 2),
(55, 15, 3),
(56, 6, 1),
(56, 11, 2),
(56, 16, 3),
(57, 7, 1),
(57, 12, 2),
(57, 17, 3),
(58, 8, 1),
(58, 13, 2),
(58, 18, 3),
(59, 9, 1),
(59, 14, 2),
(59, 19, 3),
(60, 10, 1),
(60, 15, 2),
(60, 20, 3),
(61, 1, 1),
(61, 6, 2),
(61, 11, 3),
(62, 2, 1),
(62, 7, 2),
(62, 12, 3),
(63, 3, 1),
(63, 8, 2),
(63, 13, 3),
(64, 4, 1),
(64, 9, 2),
(64, 14, 3),
(65, 5, 1),
(65, 10, 2),
(65, 15, 3),
(66, 6, 1),
(66, 11, 2),
(66, 16, 3),
(67, 7, 1),
(67, 12, 2),
(67, 17, 3),
(68, 8, 1),
(68, 13, 2),
(68, 18, 3),
(69, 9, 1),
(69, 14, 2),
(69, 19, 3),
(70, 10, 1),
(70, 15, 2),
(70, 20, 3);


#1

select trajetoid, sum(extensao_km) from segmento natural join estrada group by trajetoid;

#2

select distinct trajetoid from trajeto where trajetoid not in (select trajetoid from trajeto natural join segmento natural join estrada where trajeto.cidade_origem = estrada.cidade_origem and segmento.ordem = 1);

#3

SELECT DISTINCT t.trajetoid
FROM trajeto t
LEFT JOIN (
    SELECT trajetoid, estradaid, ordem, ROW_NUMBER() OVER (PARTITION BY trajetoid ORDER BY ordem DESC) AS rnk
    FROM segmento
) s ON t.trajetoid = s.trajetoid AND s.rnk = 1
LEFT JOIN estrada e ON s.estradaid = e.estradaid
WHERE t.cidade_destino != e.cidade_destino OR e.cidade_destino IS NULL;

#4

SELECT
    t.cidade_origem,
    t.cidade_destino,
    MIN(total_quilometragem) AS menor_quilometragem
FROM
    trajeto t
JOIN
    (
        SELECT
            t.trajetoid,
            SUM(e.extensao_km) AS total_quilometragem
        FROM
            trajeto t
        JOIN
            segmento s ON t.trajetoid = s.trajetoid
        JOIN
            estrada e ON s.estradaid = e.estradaid
        GROUP BY
            t.trajetoid
    ) trajeto_km ON t.trajetoid = trajeto_km.trajetoid
GROUP BY
    t.cidade_origem, t.cidade_destino;

#5

SELECT c.nome
FROM cidade c
WHERE NOT EXISTS (
    SELECT 1
    FROM segmento s
    JOIN estrada e ON s.estradaid = e.estradaid
    WHERE s.cidade_origem = c.cidadeid
);
