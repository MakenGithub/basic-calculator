Calculadora funcional con operadores aritméticos básicos.
    (En desarrollo...)

*Para ejecutar el archivo ".exe" en el terminal, se deberá ingresar el siguiente comando
    g++ -o calculadora programa.cpp operadores.cpp

Siendo "calculadora" un valor opcional ya que sólo pondrá nombre al archivo ejecutable.

Luego, cuando el archivo ".exe" se haya creado, ejecutar en el mismo terminal el siguiente comando:
    ./calculadora
    (o el nombre asignado al ejecutable).

*Si se hacen cambios sobre los archivos, se deberá ingresar el mismo comando para actualizar el ejecutable.

Esto permite ver su evolución directamente desde el compilador. Si se hace desde el ejecutable se recomienda:
    usar la siguiente función al final del documento principal ".cpp":
        system("pause");
    Esto evitará que el archivo se cierre automáticamente cuando termine su ejecución.

Sintáxis -> incluir documentos externos como archivos de cabecera:

El programa inicial "programa.cpp" debe incluir en la cabecera el nombre del archivo ".hpp",
    el archivo ".hpp" sólo contiene los prototipos de las funciones.
    La definición de las funciones serán escritas en un documento aparte ".cpp",
    en éste caso es "operadores.cpp", el cual debe incluir en la cabecera el archivo ".hpp"
    de la siguiente manera -> #include "operadores.hpp"
    reemplazando los corchetes angulares por comillas dobles.

Sin más que agregar, Victorita, muchas gracias por tu apoyo y contribuciones.
 ~Si podés imaginarlo, podes programarlo~