# Recruitment_JPC-EC-DG

### Integrantes : :boy: Juan Paulo Cespedes :adult: Emmanuel Collazos :woman: Daniela Gómez
 
## Enunciado :grey_exclamation:	

- *Informacion General*: 

ParkingSoft es una empresa colombiana que produce soluciones de software relacionadas con servicios de estacionamiento. En los últimos años, la compañía ha aumentado su participación de mercado a segmentos de mercado en LATAM, Estados Unidos y Canadá y desde junio de 2021, y planea expandirse a los mercados asiáticos. Como organización multicultural, sus fundadores están convencidos de que un entorno multicultural tiene muchas ventajas y la interculturalidad mejora la capacidad de sus empleados para tolerar la ambigüedad, que es una actitud clave para competir en el mercado global.

Teniendo en cuenta que mantener una perspectiva intercultural es crucial para la organización, el personal de selección quieren mejorar sus conocimientos, habilidades y actitudes hacia las diferentes culturas.

Este software asiste a personas de talento humano con información y soporte para reclutar personas de diferentes nacionalidades. El objetivo es proporcionar al personal una base de conocimientos para considerar mejor el factor de cultura al contratar e incorporar nuevos empleados.

## :speech_balloon: Requisitos

- [x] **R1**:
Agregar características de los candidatos según su nacionalidad:
1.	Tipo: cultura expresiva | cultura reservada 
2.	Estilo de contacto visual: duración e intensidad de los contactos oculares
3.	Gestos; Sí/no, Ok, buena suerte
4.	Tacto: estrechar la mano, besarse, abrazarse y otro contacto físico
5.	Respeto por la distancia y el espacio físico. 
6.	Gestión del tiempo.
7.	Estilos de comunicación. [Volumen, ritmo, tono]
8.	Tradiciones de siesta. Por ejemplo en algunos países la siesta se hace después del medio día. *preguntar a la profe sobre si toca poner sí/no hace siesta, o la hora específica de la siesta de cada uno. 
Se pueden agregar más si es necesario.

- [x] **R2**:
Crear los candidatos en el sistema:
El reclutador puede crear el perfil de los posibles candidatos. Todo candidato tiene un nombre, correo, URL de LinkedIn, URL de GitHub, y número de pasaporte. El candidato hereda la información cultural dependiendo de su nacionalidad. SE USA EL FACTORY PATTERN.

- [x] **R3**:
Agendar entrevistas:
Se necesita una identificación para crear una entrevista a cada candidato. Las entrevistas empiezan desde las 10 am. Cada entrevista dura 60 minutos por persona y hay un máximo de 3 entrevistas por día. Si el candidato no existe el sistema pide que se cree el candidato en el sistema.

- [x] **R4**:
Generar guía de entrevista:
Para candidato que tenga agendada una entrevista se crea una guía con la siguiente información:
- Nombre del candidato y fecha de la entrevista y nacionalidad.
- Información sobre los días festivos nacionales según la nacionalidad del candidato. Esta información ayudará al entrevistador a hacer preguntas para romper el hielo en las entrevistas. 
- Comportamiento intercultural esperado. Cadena que explica las características de conocimiento específicas de la nacionalidad del candidato. [Considerando las categorías descritas en RQ1]. Debe diseñar el software teniendo en cuenta el polimorfismo para cumplir con esta funcionalidad.

- [x] **R5**:
Generar carta de bienvenida para los candidatos que pasaron la prueba. Esta carta debe informar a los nuevos empleados de los conocimientos culturales que conforman la cultura colombiana (teniendo en cuenta las mismas categorías descritas en R1) y los valores de la empresa.


## :white_circle: Requisitos Funcionales
-	:heavy_check_mark: Uso del patrón de fábrica. 
-	:heavy_check_mark: Uso del polimorfismo.
-	:heavy_check_mark: Elaboración de pruebas unitarias de las principales funcionalidades.
-	:heavy_check_mark: Manejo de excepciones para flujos de excepciones.
-	:heavy_check_mark: Además de Colombia, su equipo debe considerar información de mínimo tres países diferentes.

## Diagrama UML:
[ENLACE](https://drive.google.com/file/d/1-YjouPRGkLYMIXFjP6IUAnFCsMAkoZb7/view?usp=sharing)

## Elementos Implementados
- 4 Nacionalidades: Colombiano, Coreano, Sudafricano, Frances
- La Base Reclutador puede 1) Crear Candidato 2) Generar Guía 3) Consultar Conocimientos generales de cada nacionalidad en el sistema 4)
- Mensajes personalizados de impresión para cada guía según las características de candidato
- Manejo de Excepciones para errores comunes como repetir el ID de un candidato, ingresar un ID no existente o enviar una carta de bienvenida a alguien no aprobado.

