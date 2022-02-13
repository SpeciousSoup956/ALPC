CREATE TABLE municipio( --Cria nova tabela (entidade)
  codigo INT PRIMARY KEY,-- atribuindo campos/atributos e o seus valores/tipos
  nome VARCHAR(40) NOT NULL,
  extensao DEC(10,1),
  prefeitoa CHAR(14)
);

CREATE TABLE rio(
  id INT PRIMARY KEY,
  nome VARCHAR(40),
  comprimento DEC(7,1) CHECK (comprimento>0)
);

CREATE table cruza(
  id_rio INT,
  cod_municipio INT,
  PRIMARY KEY (id_rio, cod_municipio)
);

CREATE TABLE pessoa(
  cpf CHAR(14) PRIMARY KEY,
  nome VARCHAR(80) NOT NULL,
  renda DEC(10,2) CHECK (renda>=0.00),
  nascimento DATE,
  vive BOOLEAN DEFAULT TRUE,
  cod_municipio INT
);

ALTER TABLE cruza 
ADD FOREIGN KEY (id_rio) REFERENCES rio(id)
ON UPDATE CASCADE ON DELETE CASCADE;

ALTER TABLE cruza 
ADD FOREIGN KEY (cod_municipio) REFERENCES municipio(codigo)
ON UPDATE CASCADE ON DELETE CASCADE;

ALTER TABLE municipio 
ADD FOREIGN KEY(prefeitoa) REFERENCES pessoa(cpf)
ON UPDATE CASCADE ON DELETE SET NULL;

ALTER TABLE pessoa 
ADD FOREIGN KEY(cod_municipio) REFERENCES municipio(codigo)
ON UPDATE CASCADE ON DELETE SET NULL;