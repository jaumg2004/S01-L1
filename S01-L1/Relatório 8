using System;

class Cachorro
{
    public string Nome { get; set; }
    public int Idade { get; set; }

    public Cachorro(string nome, int idade)
    {
        Nome = nome;
        Idade = idade;
    }

    public void MostrarNome()
    {
        Console.WriteLine($"O nome do cachorro é: {Nome}");
    }

    public virtual void MostrarIdade()
    {
        Console.WriteLine($"A idade do cachorro é: {Idade}");
    }
}

class CachorroGrande : Cachorro
{
    private string tamanho;

    public CachorroGrande(string nome, int idade, string tamanho) : base(nome, idade)
    {
        this.tamanho = tamanho;
    }

    public override void MostrarIdade()
    {
        Console.WriteLine($"Este é um cachorro grande, e a idade dele é: {Idade}");
    }
}

class CachorroPequeno : Cachorro
{
    public CachorroPequeno(string nome, int idade) : base(nome, idade) { }

    public override void MostrarIdade()
    {
        Console.WriteLine($"Este é um cachorro pequeno, e a idade dele é: {Idade}");
    }
}

class Program
{
    static void MostrarDetalhes(Cachorro cachorro)
    {
        cachorro.MostrarNome();
        cachorro.MostrarIdade();
    }

    static void Main(string[] args)
    {
        // Criação dos objetos
        Cachorro cachorro = new Cachorro("Rex", 4);
        CachorroPequeno cachorroPequeno = new CachorroPequeno("Bolt", 2);
        CachorroGrande cachorroGrande = new CachorroGrande("Thor", 5, "Grande");

        // Mostrar os métodos e atributos de cada classe
        MostrarDetalhes(cachorro);
        MostrarDetalhes(cachorroPequeno);
        MostrarDetalhes(cachorroGrande);
    }
}
