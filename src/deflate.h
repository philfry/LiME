#pragma once
int deflate_begin_stream(void *out, size_t outlen);
int deflate_end_stream(void);
ssize_t deflate(const void *in, size_t inlen);
