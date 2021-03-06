/* ====================================================================
 * Copyright (c) 2001-2016 The OpenSSL Project.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit. (http://www.openssl.org/)"
 *
 * 4. The names "OpenSSL Toolkit" and "OpenSSL Project" must not be used to
 *    endorse or promote products derived from this software without
 *    prior written permission. For written permission, please contact
 *    openssl-core@openssl.org.
 *
 * 5. Products derived from this software may not be called "OpenSSL"
 *    nor may "OpenSSL" appear in their names without prior written
 *    permission of the OpenSSL Project.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit (http://www.openssl.org/)"
 *
 * THIS SOFTWARE IS PROVIDED BY THE OpenSSL PROJECT ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE OpenSSL PROJECT OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 *
 * This product includes cryptographic software written by Eric Young
 * (eay@cryptsoft.com).  This product includes software written by Tim
 * Hudson (tjh@cryptsoft.com).
 *
 */

#ifndef HEADER_AFALG_ERR_H
# define HEADER_AFALG_ERR_H

# ifdef  __cplusplus
extern "C" {
# endif

/* BEGIN ERROR CODES */
/*
 * The following lines are auto generated by the script mkerr.pl. Any changes
 * made after this point may be overwritten when the script is next run.
 */
void ERR_load_AFALG_strings(void);
void ERR_unload_AFALG_strings(void);
void ERR_AFALG_error(int function, int reason, char *file, int line);
# define AFALGerr(f,r) ERR_AFALG_error((f),(r),__FILE__,__LINE__)

/* Error codes for the AFALG functions. */

/* Function codes. */
# define AFALG_F_AFALG_CHK_PLATFORM                       100
# define AFALG_F_AFALG_CREATE_BIND_SK                     106
# define AFALG_F_AFALG_CREATE_BIND_SOCKET                 105
# define AFALG_F_AFALG_CREATE_SK                          108
# define AFALG_F_AFALG_INIT_AIO                           101
# define AFALG_F_AFALG_SETUP_ASYNC_EVENT_NOTIFICATION     107
# define AFALG_F_AFALG_SET_KEY                            109
# define AFALG_F_AFALG_SOCKET                             102
# define AFALG_F_AFALG_START_CIPHER_SK                    103
# define AFALG_F_BIND_AFALG                               104

/* Reason codes. */
# define AFALG_R_EVENTFD_FAILED                           108
# define AFALG_R_FAILED_TO_GET_PLATFORM_INFO              111
# define AFALG_R_INIT_FAILED                              100
# define AFALG_R_IO_SETUP_FAILED                          105
# define AFALG_R_KERNEL_DOES_NOT_SUPPORT_AFALG            101
# define AFALG_R_KERNEL_DOES_NOT_SUPPORT_ASYNC_AFALG      107
# define AFALG_R_MEM_ALLOC_FAILED                         102
# define AFALG_R_SOCKET_ACCEPT_FAILED                     110
# define AFALG_R_SOCKET_BIND_FAILED                       103
# define AFALG_R_SOCKET_CREATE_FAILED                     109
# define AFALG_R_SOCKET_OPERATION_FAILED                  104
# define AFALG_R_SOCKET_SET_KEY_FAILED                    106

#ifdef  __cplusplus
}
#endif
#endif
