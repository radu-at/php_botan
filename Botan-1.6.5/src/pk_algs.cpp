/*************************************************
* PK Key Source File                             *
* (C) 1999-2007 The Botan Project                *
*************************************************/

#include <botan/pk_algs.h>
#include <botan/rsa.h>
#include <botan/dsa.h>
#include <botan/dh.h>
#include <botan/nr.h>
#include <botan/rw.h>
#include <botan/elgamal.h>

namespace Botan {

/*************************************************
* Get an PK public key object                    *
*************************************************/
Public_Key* get_public_key(const std::string& alg_name)
   {
   if(alg_name == "RSA")      return new RSA_PublicKey;
   else if(alg_name == "DSA") return new DSA_PublicKey;
   else if(alg_name == "DH")  return new DH_PublicKey;
   else if(alg_name == "NR")  return new NR_PublicKey;
   else if(alg_name == "RW")  return new RW_PublicKey;
   else if(alg_name == "ELG") return new ElGamal_PublicKey;
   else
      return 0;
   }

/*************************************************
* Get an PK private key object                   *
*************************************************/
Private_Key* get_private_key(const std::string& alg_name)
   {
   if(alg_name == "RSA")      return new RSA_PrivateKey;
   else if(alg_name == "DSA") return new DSA_PrivateKey;
   else if(alg_name == "DH")  return new DH_PrivateKey;
   else if(alg_name == "NR")  return new NR_PrivateKey;
   else if(alg_name == "RW")  return new RW_PrivateKey;
   else if(alg_name == "ELG") return new ElGamal_PrivateKey;
   else
      return 0;
   }

}