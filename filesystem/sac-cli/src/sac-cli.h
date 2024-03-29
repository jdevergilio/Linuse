#ifndef SAC_CLI_H_
#define SAC_CLI_H_

#include <time.h>
#include <pthread.h>
#include <readline/readline.h>
#include <stdio.h>
#include <fuse.h>
#include <unistd.h>
#include <commons/config.h>
#include <stdlib.h>
#include <commons/string.h>
#include <commons/log.h>
#include <commons/collections/list.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <sys/time.h>
#include <stddef.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/statfs.h>

/*==	Variables Globales		==*/
int _socket;
t_log* logger;
int filedes = 0;

void cargar_dirents_en_buffer(t_list* lista, void *buf, fuse_fill_dir_t filler, int cant);

void mostrar_lista(t_list* lista);

#endif /* SAC_CLI_H_ */
