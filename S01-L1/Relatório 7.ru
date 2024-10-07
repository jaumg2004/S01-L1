#Questão 1
# Solicita três números do usuário e calcula a média
puts "Digite o primeiro número:"
num1 = gets.chomp.to_f

puts "Digite o segundo número:"
num2 = gets.chomp.to_f

puts "Digite o terceiro número:"
num3 = gets.chomp.to_f

# Calcula a média
media = (num1 + num2 + num3) / 3.0

# Imprime a média
puts "A média dos três números é: #{media}"


#Questão 2
# Classe base Carro
class Carro
    def descrever
      "Este é um carro."
    end
  end
  
  # Classe CarroEsportivo herdando de Carro
  class CarroEsportivo < Carro
    def descrever
      "Este é um carro esportivo, rápido e elegante."
    end
  end
  
  # Classe CarroSedan herdando de Carro
  class CarroSedan < Carro
    def descrever
      "Este é um carro sedan, espaçoso e confortável."
    end
  end
  
  # Criação das instâncias das classes
  carro = Carro.new
  carro_esportivo = CarroEsportivo.new
  carro_sedan = CarroSedan.new
  
  # Chama o método descrever para cada uma das instâncias
  puts carro.descrever
  puts carro_esportivo.descrever
  puts carro_sedan.descrever
  