use std::io;

fn preenche_arr(arr: &mut [i32], x: i32) {
    for i in 0..arr.len() {
        arr[i] = i as i32 * x;
    }
}

fn main() {
    for _ in 0..2 {
        let mut var1 = String::new();
        let mut var2 = String::new();
        let mut op = String::new();

        // Leitura de var1
        io::stdin().read_line(&mut var1)
            .expect("Falha ao ler a linha");
        
        // Leitura de var2
        io::stdin().read_line(&mut var2)
            .expect("Falha ao ler a linha");
        
        // Leitura da operação
        io::stdin().read_line(&mut op)
            .expect("Falha ao ler a linha");

        // Remover os espaços em branco ou novas linhas
        let var1: i32 = var1.trim().parse().expect("Por favor, digite um número válido");
        let var2: i32 = var2.trim().parse().expect("Por favor, digite um número válido");
        let op = op.trim();

        // Realizar a operação
        if op == "+" {
            println!("Resultado: {}", var1 + var2);
        } else if op == "*" {
            println!("Resultado: {}", var1 * var2);
        } else {
            println!("Operação inválida!");
        }

        
    }

    let mut var = String::new()io::stdin().read_line(&mut var)
    .expect("Falha ao ler a linha");
    let var: i32 = var.trim().parse().expect();
    let mut arr = [0; 10];

    preenche_arr(&mut arr, var);

    for val in &arr {
        println!("{}", val);
    }
}
