#if !defined(CRYPTO_SQUARE_H)
#define CRYPTO_SQUARE_H
#include <string>
#include <vector>
namespace crypto_square {
        class cipher{
             unsigned int c =0;
                unsigned int r = 0;
             std::string n_input ="";
                public:
          cipher(std::string name) : n_input(name){
            }
        void calculateColumnAndRow(std::string text);
       std::string normalize_plain_text();
       std::vector<std::string> plain_text_segments();
        std::string normalized_cipher_text();
        std::string cipher_text();


        };
}  // namespace crypto_square

#endif // CRYPTO_SQUARE_H