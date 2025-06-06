#include "common.h"

extern volatile sig_atomic_t server_running;

void handle_sigint(int sig);
void* handle_client(void* arg);
void handle_client_disconnection(int client_id);