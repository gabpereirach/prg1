# Modulo

Soient les déclarations suivantes :

~~~cpp
int i = 5, j = 11, n = 10;
double x = 5, y = 11;
~~~

Quel est le résultat d'évaluation des expressions suivantes ? en cas d'erreur, indiquez la raison.

| # | Expréssion  | Résultat                             |
|---|-------------|--------------------------------------|
| 1 | `j % i`     | 1                                    |
| 2 | `n % i`     | 0                                    |
| 3 | `y % x`     | erreur % utilisable que pour des int |
| 4 | `y % i`     | erreur % utilisable que pour des int |
| 5 | `-j % i`    | -1                                   |
| 6 | `n % ++i`   | résultat=4 i=6                       |
| 7 | `n++ % ++i` | résultat=4 i=6 n=11                  |

<details>
<summary>Solution</summary>

| # | Expréssion  | Résultat                                          |
|---|-------------|---------------------------------------------------|
| 1 | `j % i`     | 1                                                 |
| 2 | `n % i`     | 0                                                 |
| 3 | `y % x`     | Erreur, le modulo n'est pas défini pour les réels |
| 4 | `y % i`     | Erreur, le modulo n'est pas défini pour les réels |
| 5 | `-j % i`    | -1                                                |
| 6 | `n % ++i`   | 4                                                 |
| 7 | `n++ % ++i` | 4                                                 |

</details>
