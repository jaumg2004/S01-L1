
import(
	"fmt"
	"math"
	"math/rand"
)

var a int
var b int
var c int

fmt.Print("Digite o valor de a: ")
fmt.Scan(&a)
fmt.Print("Digite o valor de b: ")
fmt.Scan(&b)
fmt.Print("Digite o valor de c: ")
fmt.Scan(&c)

var d float64

d = float64(b*b - 4*a*c)

if d >= 0 {
	raiz1 := (-float64(b) + math.Sqrt(d)) / (2 * float64(a))
	raiz2 := (-float64(b) - math.Sqrt(d)) / (2 * float64(a))
	fmt.Printf("As raízes da equação são: %.2f e %.2f\n", raiz1, raiz2)
} else {
	fmt.Println("Não há raízes reais, pois o discriminante é negativo.")
}

var ale int
var fat int = 1

ale = rand.Intn(10)

for i := ale; i > 1; i-- {
	fat *= i
}

fmt.Printf("Número aleatório: %d\n", ale)
fmt.Printf("Fatorial de %d é: %d\n", ale, fat)