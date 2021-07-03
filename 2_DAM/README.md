# TEORÍA

fork --> función para crear procesos hijos. include<unistd.h>
 - El proceso padre siempre la variable de retorno es distinto de cero.
 - El proceso hijo el valor es 0.

pid_t --> tipo de dato para un proceso.

getpid() --> retorna valor del proceso.



Funcion wait() --> include<sys/wait.h>
Se ejecuta siempre en el proceso padre. Si hay un proceso que ha muerto, wait recoge la señal que ha muerto, si no se queda esperado.
Manda una señal al padre, para avisar que el proceso hijo ha finalizado.
Si no ejecuta el wait se genera un proceso zombie.

wait(&int);

### MACROS DE WAIT
- WIFEXITED(int) --> comprueba si ha retornado bien el wait
- WIEXITSTATUS(int) --> devuelve la verdadera variable de retorno.

###SEÑALES
- Un numero que se ha defiinido con una macro para que se lea mejor.

-----------------------------------------------------------------------------------------------------

- SIGHUP --> Si se ha caído la conexión.
- SIGINT --> El programa ha de terminar.
- SIGQUIT --> El programa ha de terminar.
- SIGTRAP --> Se ha atrapado una señal.
- SIGABORT --> Se ha recibido la señal *abort*
- SIGBUS --> Error en el bis de L/E.
- SIGFPE --> Se está intentando dividir por cero.
- SIGKILL --> Señal no enmascarable, echa al programa de la memoria.
- SIGUESR1 --> Señal de libre uso (DEFINIBLE).
- SIGUESR2 --> Señal de libre uso (DEFINIBLE).
- SIGSEGV --> Se está escribiendo fuera de su memproa asignada, violación de segmento.
- SIGTERM --> El programa ha de terminar, *"Control+c"*.
- SIGCHILD --> Enviado cada vez que uno de los procesos hjios mueren.
- SIGCONT --> Reanudar un proceso detenido.
- SIGPIPE --> Ha habido un problema en una tubería genérica.
- SIGTIN --> Ha habido un problema en una tubería de entrada.
- SIGTOU --> Ha abido un problema en una tubería de salida.

- si no se recoge la señal cuando el proceso hijo se acaba es llama proceso zombie. haciendo un wait.

Gestor de señales o manejadores de señales. handler. Limpia la cola de mensajes.

- coalescencia. Funde las señales


fork y system sirven para crear procesos hijos. system("toilet -f pagga --gay");

variable atómica. No se puede interrumpir hasta que no se ha terminado.


### HILOS
- #include<phtread.h>
pthread hilo_id; --> Tipo de dato.
Se crea un hilo con pthread_create.

pthread_create(&hilo_id)

- Para Compilar hilos --> g++ -o nombreprograma nombreprograma.cpp -lpthread

Condicion de carrera --> 

- mutex();
Mecanismo que nos ayude en la sincronización para proteger una sección critica en nuestro código.
- forma larga

pthread_mutex_t mutex;
pthread_mutex_init (&mutex, NULL);

- corta
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;


#### EJERCICIOS
2 HILOS
meter pares y impares

escribe los impares

asegurarse primero que haya acabado al otro.

### SEMÁFOROS

- Mecanismo de sincronización. Protegen acceso a una "sección crítica".

- #include<semaphore.h>

int sem_init() --> iniciarlizarlo.
  parametros. -> referencia al semáforo.
              -> indica si el semáforo es compartido entre procesos. si no es compartido se pone 0.
              -> valor de inicialización. Solo un hilo accede.
int sem_wait() --> decrementar una unidad al semáforo o bloquear el acceso al recurso compartido por otro hilo.
  parametros. -> referencia al semáforo.
int sem_post() --> incrementar una unidad al semáforo o desbloquear el acceso al recurso compartido por otro hilo.













