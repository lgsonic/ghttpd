#define NGX_CONFIGURE ""

#ifndef NGX_HAVE_AIO
#define NGX_HAVE_AIO  1
#endif


#ifndef NGX_HAVE_IOCP
#define NGX_HAVE_IOCP  1
#endif


#ifndef NGX_HAVE_NONALIGNED
#define NGX_HAVE_NONALIGNED  1
#endif


#ifndef NGX_CPU_CACHE_LINE
#define NGX_CPU_CACHE_LINE  32
#endif


#ifndef NGX_HTTP_CACHE
#define NGX_HTTP_CACHE  1
#endif


#ifndef NGX_HTTP_GZIP
#define NGX_HTTP_GZIP  1
#endif


#ifndef NGX_HTTP_SSI
#define NGX_HTTP_SSI  1
#endif


#ifndef NGX_CRYPT
#define NGX_CRYPT  1
#endif


#ifndef NGX_HTTP_GEO
#define NGX_HTTP_GEO  1
#endif


#ifndef NGX_HTTP_PROXY
#define NGX_HTTP_PROXY  1
#endif


#ifndef NGX_PCRE
#define NGX_PCRE  1
#endif


#ifndef PCRE_STATIC
#define PCRE_STATIC  1
#endif


#ifndef NGX_OPENSSL_MD5
#define NGX_OPENSSL_MD5  1
#endif


#ifndef NGX_SSL
#define NGX_SSL	1
#endif


#ifndef NGX_OPENSSL
#define NGX_OPENSSL	1
#endif


#ifndef NGX_HAVE_OPENSSL_MD5_H
#define NGX_HAVE_OPENSSL_MD5_H  1
#endif


#ifndef NGX_PREFIX
#define NGX_PREFIX  "./"
#endif


#ifndef NGX_CONF_PREFIX
#define NGX_CONF_PREFIX  "conf/"
#endif


#ifndef NGX_SBIN_PATH
#define NGX_SBIN_PATH  ""
#endif


#ifndef NGX_CONF_PATH
#define NGX_CONF_PATH  "nginx.conf"
#endif


#ifndef NGX_PID_PATH
//#define NGX_PID_PATH  "nginx.pid"
#define NGX_PID_PATH  ""
#endif


#ifndef NGX_LOCK_PATH
//#define NGX_LOCK_PATH  "nginx.lock"
#define NGX_LOCK_PATH  ""
#endif


#ifndef NGX_ERROR_LOG_PATH
//#define NGX_ERROR_LOG_PATH  "ghttpd.log"
#define NGX_ERROR_LOG_PATH  ""
#endif


#ifndef NGX_HTTP_LOG_PATH
//#define NGX_HTTP_LOG_PATH  "access.log"
#define NGX_HTTP_LOG_PATH  ""
#endif


#ifndef NGX_HTTP_CLIENT_TEMP_PATH
//#define NGX_HTTP_CLIENT_TEMP_PATH  "client_body_temp"
#define NGX_HTTP_CLIENT_TEMP_PATH  ""
#endif


#ifndef NGX_HTTP_PROXY_TEMP_PATH
//#define NGX_HTTP_PROXY_TEMP_PATH  "proxy_temp"
#endif


#ifndef NGX_HTTP_FASTCGI_TEMP_PATH
//#define NGX_HTTP_FASTCGI_TEMP_PATH  "fastcgi_temp"
#endif


#ifndef NGX_HTTP_UWSGI_TEMP_PATH
//#define NGX_HTTP_UWSGI_TEMP_PATH  "uwsgi_temp"
#endif


#ifndef NGX_HTTP_SCGI_TEMP_PATH
//#define NGX_HTTP_SCGI_TEMP_PATH  "scgi_temp"
#endif


#ifndef NGX_SUPPRESS_WARN
#define NGX_SUPPRESS_WARN  1
#endif


#ifndef NGX_SMP
#define NGX_SMP  1
#endif


#ifndef NGX_USER
#define NGX_USER  ""
#endif


#ifndef NGX_GROUP
#define NGX_GROUP  ""
#endif


#ifndef NGX_DEBUG
#define NGX_DEBUG  1
#endif

