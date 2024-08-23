local x = io.read()

for i=1,10,1 do
print(x*i)
end


local tabela = {}

for i=1,100,1 do
tabela[i] = math.random(1, 1000)
end

local cont = 0

for i=1, 100, 1 do
    if tabela[i]%2==0 then
        cont = cont + 1
    end
    
end

print("Quantidades de números pares",cont)