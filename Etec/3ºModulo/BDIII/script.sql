mysql -h localhost -u root -p < script_bd3_editora.sql
mysql -h localhost -u root -p
USE editora;

SELECT *
FROM Livros
WHERE PrecoUnitario
BETWEEN 50.00 AND 100.00;

SELECT *
FROM Livrarias
WHERE NomeLivraria
BETWEEN 'C' AND 'J';


SELECT *
FROM Livros
ORDER BY IDLivro
LIMIT 5;

SELECT 
MIN(PrecoUnitario) AS 'Menor Valor' 
FROM Livros;


SELECT 
MAX(PrecoUnitario) AS 'Maior Valor' 
FROM Livros;



SELECT 
MIN(Autor) AS 'Menor Autor' 
FROM Livros;

SELECT 
MAX(TituloLivro) AS 'Maior Titulo' 
FROM Livros;

SELECT 
COUNT(IDLivro) AS 'Quantidade de Registros'
FROM Livros;

SELECT 
AVG(PrecoUnitario) AS 'Média dos Preços de Livros'
FROM Livros;

SELECT 
SUM(QtdeVendida) AS 'Somatória total das Vendas'
FROM ItensNF;

SELECT nf.IDVenda AS 'Venda',
nf.DataVenda AS 'Data',
la.NomeLivraria AS 'Nome',
la.Telefone AS 'Contato'
FROM NotasFiscais AS nf INNER JOIN Livrarias AS la;

SELECT inf.IDVenda AS 'Venda',
lo.TituloLivro AS 'Titulo',
inf.QtdeVendida AS 'Qtde',
lo.PrecoUnitario AS 'Valor'
FROM ItensNF AS inf INNER JOIN Livros AS lo;

SELECT inf.IDVenda AS 'Venda',
lo.TituloLivro AS 'Titulo',
inf.QtdeVendida AS 'Qtde',
lo.PrecoUnitario AS 'Valor',
inf.QtdeVendida * lo.PrecoUnitario AS 'Subtotal'
FROM ItensNF AS inf INNER JOIN Livros AS lo;

SELECT inf.IDVenda AS 'Venda',
lo.TituloLivro AS 'Titulo',
inf.QtdeVendida * lo.PrecoUnitario AS 'Subtotal'
FROM ItensNF AS inf 
INNER JOIN Livros AS lo
LIMIT 5;

SELECT inf.IDVenda AS 'Venda',
lo.TituloLivro AS 'Titulo',
inf.QtdeVendida * lo.PrecoUnitario AS 'Subtotal'
FROM ItensNF AS inf 
INNER JOIN Livros AS lo
ORDER BY Subtotal 
DESC LIMIT 3;