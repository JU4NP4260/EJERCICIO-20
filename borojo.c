Salva wcat.c y realiza un commit.

Luego sincroniza con el repositorio remoto (push). Esto hará que se disparen las pruebas (acciones) en GitHub.

Ingresa de nuevo al repositorio en GitHub. Ingresa al menú Actions. Espera un minuto y refresca la página. Si todo está bien verás una marca verde al lado izquierdo del commit que enviaste.

Dale click al mensaje al lado de la marca verde. Luego dale click a Autograding para observar todos los pasos que se realizaron para verificar tu trabajo.

Ejercicio 20: documentación de las evaluaciones
Todas las entregas que realices deben estar acompañadas de una documentación que explique los aspectos técnicos (y otros que te pediré) de la solución que propongas a los problemas que te plantearé para las evaluaciones. Lo interesante de GitHub es que te permite almacenar repositorios no solo para el código, sino también para la documentación. En el ejercicio anterior te hablé del lenguaje con el cual se escribió el archivo README.md. Se trata del lenguaje Markdown que será el mismo que utilizarás para escribir la documentación de tus entregas. Como te comenté antes, no tienes de qué preocuparte, realmente es muy fácil.

Crea un directorio llamado project4. Ten presente cambiarte primero al directorio padre donde están almacenados los projects anteriores.

Inicia un repositorio allí.

Crea unos cuantos archivos.

Dile a Git que haga tracking de esos archivos.

Realiza un primer commit.

Crea un repositorio remoto en GitHub que esté sincronizado con tu repositorio local. No olvides comprobar su creación.

Nota

RECUERDA cómo crear el repositorio

gh repo create NOMBRE --public --source=. --push --remote=origin
Modifica los archivos creados.

Realiza un par de commits más.

Sincroniza los cambios con el repositorio remoto.

Hasta aquí nada nuevo, ¿Verdad?

Ingresa a GitHub y selecciona la opción Create New File en el botón Add file.

Le vas a poner de nombre README.md.

Verás que se abre un editor en el cual podrás añadir tu documentación. Además podrás formatearlo en lenguaje Markdown.

En este sitio puedes encontrar una cheat sheet del lenguaje.

Cambia el título del documento por DOCUMENTACIÓN DEL PROJECT 4.

Indica que ese texto tendrá formato h1 colocando el símbolo # seguido de un espacio antes del título.

Puedes hacer click en el menú preview para que puedas ver cómo te va quedando el documento.

Ahora te pediré que insertes una imagen, un hipervínculo, un título de tipo h2 y otro tipo h3, escribas unas cuantas líneas de texto y coloques una palabra en negrita, itálica y resaltada, crea una lista ordenada y una lista no ordenada.

A medida que experimentas ve observando en preview cómo te queda.

Una vez termines, dale click al botón Commit changes.

Regresa al inicio del 