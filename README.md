# Repetição em C

Exercícios da faculdade sobre `for`, `while`, `do-while` e menus.
Os arquivos originais usam a extensão `.cpp`, mantida nesta organização.

## Exercícios

| Arquivo | Conteúdo |
|---|---|
| [01-contagem-crescente-decrescente](for/01-contagem-crescente-decrescente.cpp) | Contagem de 1 a 10 e de 10 a 1 |
| [02-numeros-pares-ate-30](for/02-numeros-pares-ate-30.cpp) | Números pares até 30 |
| [03-contagem-pares-impares](for/03-contagem-pares-impares.cpp) | Tentativa de contar pares e ímpares; revisar condição |
| [04-maior-altura](for/04-maior-altura.cpp) | Maior de seis alturas |
| [01-exemplos-while-do-while](while/01-exemplos-while-do-while.cpp) | Exemplos de while e do-while; revisar saída |
| [02-numeros-impares-ate-30](while/02-numeros-impares-ate-30.cpp) | Números ímpares até 30 |
| [01-media-notas-com-validacao](do-while/01-media-notas-com-validacao.cpp) | Média de duas notas com validação de intervalo |
| [02-menu-de-mensagens](do-while/02-menu-de-mensagens.cpp) | Menu com switch e repetição; revisar condição de saída |

## Como executar

Abra um arquivo por vez no seu editor e use um compilador C/C++.
Com G++ instalado, a partir da pasta deste repositório:

```bash
g++ -std=c++11 do-while/01-media-notas-com-validacao.cpp -o programa
./programa
```

No Windows, use `-o programa.exe` e execute `./programa.exe`.
Cada arquivo contém seu próprio programa; compile somente um de cada vez.

## Adicionar um exercício

Escolha `for/`, `while/` ou `do-while/`. Use o próximo número e uma descrição,
por exemplo `for/05-tabuada.cpp`. Acrescente uma linha na tabela acima.
Para uma nova lista com vários assuntos, crie `lista-03/` neste repositório.

## Pontos para revisar nos códigos originais

- Os dois primeiros exercícios de `for/` declaram `main()` sem `int`; compiladores estritos podem rejeitá-los.
- `for/03-contagem-pares-impares.cpp` usa `% 5` na condição, embora as mensagens falem de paridade.
- O primeiro exemplo de `while/` tem um laço que não inicia e um `printf` sem marcador para o valor.
- O menu anuncia a opção 4 para encerrar, mas a repetição termina com 0.

Esta organização preserva a lógica dos exercícios e registra essas pendências para estudo.

---

[Todos os estudos](https://github.com/Rafael-Cornelius/Rafael-Cornelius/blob/main/FACULDADE.md) · [Como adicionar trabalhos](https://github.com/Rafael-Cornelius/Rafael-Cornelius/blob/main/COMO-ADICIONAR.md)
