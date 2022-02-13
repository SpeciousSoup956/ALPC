INSERT INTO rio (id, nome, comprimento)
VALUES (10, 'Rio Piracicaba', 115.0);

INSERT INTO municipio (codigo, nome, extensao)
VALUES (3538709, 'Piracicaba', 1378.0);

INSERT INTO municipio (codigo, nome, extensao)
VALUES (3501608, 'Americana', 133930.0);

INSERT INTO cruza (id_rio, cod_municipio)
VALUES (10, 3538709);

INSERT INTO cruza (id_rio, cod_municipio)
VALUES (10, 3501608);

INSERT INTO pessoa (cpf, nome, renda, nascimento, cod_municipio)
VALUES ('321.123.010-99', 'Marta Veloso', 2900.00, '1977-03-22', 3538709);

INSERT INTO pessoa (cpf, nome, renda, nascimento, cod_municipio)
VALUES ('404.040.500-12', 'Yago Duarte', 1039.00, '2000-11-30', 3538709);

INSERT INTO pessoa (cpf, nome, renda, nascimento, cod_municipio)
VALUES ('505.050.600-12', 'Chico S. ', null, '1956-06-26', 3501608);

UPDATE municipio SET prefeitoa= '505.050.600-12'
WHERE codigo=3501608;
