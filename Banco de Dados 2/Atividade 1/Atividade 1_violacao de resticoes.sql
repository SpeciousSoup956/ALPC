/* ATIVIDADE PROPOSTA: Utilizando o material e os scripts fornecidos, envie um arquivo .SQL contendo comandos INSERT e UPDATE que violam as diferentes 
restrições existentes no banco de dados (exceto as chaves estrangeiras) */
-------------------------------------------------------------------------------------------------------------------------------------------------------

-- VIOLAÇÃO DE CHAVE PRIMÁRIA (PRIMARY KEY - PK):

-- O comando abaixo é responsável pela inserção de uma tupla na tabela "Pessoa", no entanto o valor do CPF atribuído já foi inserido em outro registro. 
-- O campo CPF foi definido como Chave primaria e essa restrição impõe a exclusividade dos dados. As Chaves Primárias devem sempre conter valores únicos, por esse motivo o comando abaixo irá falhar.
INSERT INTO PESSOA (cpf, nome, renda, nascimento, vive, cod_municipio)
VALUES ('321.123.010-99', 'Roberta Lacerti Romeni', 4500.00, '1991-09-15', 't', 3538709);


-- O comando abaixo é responsável pela alteração dos dados na tabela municipio. Nesse caso, altera o valor do campo codigo de um registro.
-- O codigo 3501608 foi definido como chave primária e o valor já foi atribuído para outro munícipio. As Chaves Primárias devem sempre conter valores únicos, por esse motivo o comando abaixo irá falhar.
UPDATE municipio
SET    codigo= 3501608
WHERE  codigo= 3538709
commit;
---------------------------------------------------------------------------------------------------------------------------------------------------------

--VIOLAÇÃO DE NOT NULL:

-- O comando abaixo insere um registo com o nome null. O campo nome foi definido como NOT NULL.
-- A restrição NOT NULL garante que uma coluna não admita valores NULL. por esse motivo o comando abaixo irá falhar
INSERT INTO municipio (nome, extensao, prefeitoa)
VALUES ('', 14585.6, '')
--ERROR: null value in column "codigo" of relation "municipio" violates not-null constraint DETAIL: Failing row contains (null, , 14585.6, ).
--------------------------------------------------------------------------------------------------------------------------------------------------------

--VIOLAÇÃO UNIQUE

-- O comando abaixo insere uma nova linha na tabela cruza, no entanto essa combinação de atributos já existe.
-- A restrição UNIQUE garante que o conteúdo da coluna (ou combinação de colunas) assuma um valor diferente para cada linha da tabela, por esse motivo o comando abaixo irá falhar. 
INSERT INTO cruza (id_rio, cod_municipio)
VALUES (10, 3501608);
--------------------------------------------------------------------------------------------------------------------------------------------------------

--VIOLAÇÃO CHECK
-- O comando abaixo atribui valor do campo renda na tabela pessoa. O campo renda é limitado para receber valores>=0.00 e o valor inserido é negativo. Por esse motivo o comando abaixo irá falhar.
-- Restrições CHECK impõe integridade de domínio limitando os valores aceitos por uma ou mais colunas.
UPDATE PESSOA
SET    renda= -125.10
WHERE  cpf= '505.050.600-12'
