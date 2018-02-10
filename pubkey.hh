#ifndef __PUBKEY_HH__
#define __PUBKEY_HH__

#define PUBLIC_KEY_SIZE 65

void pubkey_decompress(unsigned int, const char *, unsigned char *, size_t *);
string get_addr(unsigned char, string);
string str_to_ripesha(string);
string rebuild_bech32(string);

#endif