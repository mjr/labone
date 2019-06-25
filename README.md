# Laboratório 1

Desenvolvimento, modularização, depuração e profiling de programas em C++.

Alunos: **Lucas Santos Neves e Roberto Manaia dos Santos Junior**

## Como compilar e rodar cada programa?

1. Entre na pasta do programa (ex: question_one).
2. Compile os arquivos.
3. Execute o programa.

```console
cd question_one/
make
./bin/main --options
```

1. Entre na pasta do programa (ex: question_two).
2. Compile os arquivos.
3. Execute o programa.

```console
cd question_two/
g++ -o main -O0 main.cpp
./main
```

## Observações

Para não dar um erro no cálculo de N nas séries de Taylor, colocamos um valor máximo para que não seja possível iterar mais de 500 vezes (só para não causar overflow no programa).

Para depurar o nosso programa utilizando o `gdb` podemos rodar os seguintes comandos:

### Compilando o programa com as diretivas de compilação -g e -O0, necessárias para o uso do `gdb`.
### Executar o programa no ambiente `gdb`

```console
g++ -o main -g -O0 main.cpp
gdb main
 ```

Agora que estamos no `prompt` do `gdb`, podemos utilizar os comandos do `gdb`:

### Adicionando o ponto de parada na linha 59 (para inspecionar assim que a condição dos casos a-c forem satisfeitas)

```console
break 59
 ```

Para analisar o nosso programa utilizando o `gprof` podemos rodar os seguintes comandos:

### Compilando o programa com a diretiva de compilação -pg, necessárias para que o compilador insira mais informações para o profiler
### O profile gmon.out será criado
### Executando o `gprof` para exibir as informações sobre as chamadas das funções ao longo da execução, utilizando a opção `call graph`

```console
g++ -o main -pg -O0 main.cpp
gprof --brief -q main
```
