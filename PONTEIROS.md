Em C ANSI, o uso de `*` e `&` é fundamental para o entendimento de ponteiros e manipulação direta de memória.

### 1. Sem `*` ou `&`
Quando você declara uma variável sem `*` ou `&`, você está declarando uma **variável comum** (normalmente chamada de variável de valor). Por exemplo:

```c
int x = 10; // Variável inteira comum
```

Neste caso:
- `x` guarda diretamente o valor `10`.
- Se você fizer algo como `y = x;`, o valor de `x` é **copiado** para `y`.

### 2. Usando `&` (operador de endereço)
O `&` é o **operador de endereço**. Ele retorna o **endereço de memória** de uma variável.

```c
int x = 10;
int *ptr = &x; // ptr guarda o endereço de memória de x
```

Neste caso:
- `&x` retorna o endereço de memória onde `x` está armazenado.
- `ptr` armazena o endereço de `x`, ou seja, ele **aponta para `x`**.
- Se você imprimir `ptr`, verá o endereço de `x`. Se quiser acessar o valor de `x` por meio de `ptr`, terá que usar `*ptr` (veremos a seguir).

### 3. Usando `*` (ponteiro)
O `*` pode ser usado de duas formas: para declarar um **ponteiro** ou para **desreferenciar** (acessar o valor de uma variável apontada por um ponteiro).

#### Declaração de ponteiro
Ao declarar um ponteiro, você está criando uma variável que armazena o **endereço de outra variável**.

```c
int x = 10;
int *ptr = &x; // Ponteiro ptr que aponta para o endereço de x
```

Aqui, `ptr` é um **ponteiro para `int`** e contém o endereço de `x`.

#### Desreferenciamento
Quando você usa `*` na frente de um ponteiro, você está **desreferenciando** o ponteiro, ou seja, acessando o **valor** no endereço de memória para o qual ele aponta.

```c
int x = 10;
int *ptr = &x; // ptr guarda o endereço de x
int y = *ptr;  // y recebe o valor apontado por ptr, que é 10
```

Neste caso:
- `ptr` guarda o endereço de `x`.
- `*ptr` retorna o valor armazenado em `x`, que é `10`.

### Exemplos mais completos:

#### Exemplo 1: Variáveis normais
```c
int x = 10;   // x guarda o valor 10
int y = x;    // y recebe uma cópia do valor de x (também será 10)
```

#### Exemplo 2: Usando o operador `&` (endereço)
```c
int x = 10;       // x guarda o valor 10
int *ptr = &x;    // ptr guarda o endereço de x
printf("%p", ptr); // Mostra o endereço de x
```

#### Exemplo 3: Usando o operador `*` (desreferenciamento)
```c
int x = 10;       // x guarda o valor 10
int *ptr = &x;    // ptr guarda o endereço de x
int y = *ptr;     // y recebe o valor armazenado no endereço apontado por ptr (10)
```

### Diferença nos parâmetros de função

#### Sem `*` ou `&` (passagem por valor)
Ao passar uma variável para uma função **sem** `*` ou `&`, você está passando uma **cópia** da variável (passagem por valor).

```c
void func(int x) {
    x = 20;  // Isso muda apenas o x local da função, não o original
}

int main() {
    int x = 10;
    func(x);  // Passa uma cópia de x
    printf("%d", x);  // Ainda será 10
    return 0;
}
```

#### Usando `&` (passagem por referência)
Quando você usa `&` ao passar uma variável, está passando o **endereço de memória** dela (passagem por referência). Isso permite que a função modifique o valor da variável original.

```c
void func(int *x) {
    *x = 20;  // Agora isso muda o valor original de x
}

int main() {
    int x = 10;
    func(&x);  // Passa o endereço de x
    printf("%d", x);  // Agora será 20
    return 0;
}
```

### Resumo:

- **Variável comum**: guarda diretamente um valor.
- **`&`**: retorna o endereço de uma variável.
- **`*` (declaração de ponteiro)**: indica que a variável é um ponteiro para outro tipo.
- **`*` (desreferenciamento)**: acessa o valor guardado no endereço de memória para o qual o ponteiro aponta.