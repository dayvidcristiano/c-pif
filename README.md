# C-Programação Imperativa e Funcional

Repositório com exercícios e programas em linguagem C desenvolvidos para a disciplina de Programação Imperativa e Funcional.

## Pré-requisitos

- Git instalado
- GCC (compilador de C) instalado

Para verificar se o GCC está instalado:
```bash
gcc --version
```

## Como baixar o repositório

1. Abra o terminal.
2. Navegue até a pasta onde deseja salvar o projeto:
```bash
cd caminho/da/pasta
```
3. Clone o repositório:
```bash
git clone https://github.com/dayvidcristiano/c-pif.git
```
4. Entre na pasta do projeto:
```bash
cd c-pif
```

## Como compilar e executar

1. Entre na pasta do exercício desejado. Exemplo:
```bash
cd listas/Lista-Cap1
```

2. Compile o arquivo:
```bash
gcc exercicio01.c -o exercicio01
```

3. Execute o programa gerado:
```bash
./exercicio01
```

### Programas que usam a biblioteca math.h

Alguns exercícios (com sqrt, pow, ceil, entre outros) precisam da flag `-lm`:
```bash
gcc exercicio14.c -o exercicio14 -lm
./exercicio14
```

## Estrutura do repositório

```
c-pif/
├── introducao/
│   ├── Aula 01 - 10.08/
│   └── Aula 02 - 17.08/
├── operadores/
│   ├── Aula 03 - 24.08/
│   └── Aula 04 - 31.09/
├── laco-de-repeticao/
│   └── Aula 06 - 21.09/
└── listas/
    ├── Lista-Cap1/
    │   └── Lista-Cap1-Abertas/
    └── Lista-Cap2/
        └── Lista-Cap2-Abertas/
```

Cada pasta de aula ou lista contém os arquivos `.c` correspondentes aos exercícios daquele encontro ou capítulo. As pastas `Lista-Cap1-Abertas` e `Lista-Cap2-Abertas` contêm as respostas discursivas (em `.txt`) das questões teóricas de cada capítulo.

<p align="center">
  <img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white" alt="C" />
</p>
<p align="center">
  Desenvolvido por <strong>Dayvid Cristiano</strong>
</p>
