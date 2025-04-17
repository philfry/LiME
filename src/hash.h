#pragma once
int ldigest_init(void);
int ldigest_update(void *v, size_t is);
int ldigest_final(void);
int ldigest_write_tcp(void);
int ldigest_write_disk(void);
void ldigest_clean(void);
