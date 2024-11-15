import Control.Monad (when)

-- Função fatorial
fatorial :: Integer -> Integer
fatorial 0 = 1
fatorial n = n * fatorial (n - 1)

-- Função para decidir entre fatorial ou multiplicação por 2
calcular :: Integer -> Integer
calcular n = if n > 0 then fatorial n else n * 2

main = do
    -- Questão 1
    let lista = [30,29..1]                  -- Lista decrescente de 30 a 1
    let listaMultiplicada = map (*3) lista  -- Multiplica cada elemento por 3
    let listaInvertida = reverse listaMultiplicada -- Inverte a lista
    putStrLn ("Último elemento da lista invertida: " ++ show (last listaInvertida))
    
    -- Questão 2
    let numero = 5  -- Substitua pelo número desejado
    putStrLn ("Resultado do cálculo para " ++ show numero ++ ": " ++ show (calcular numero))
