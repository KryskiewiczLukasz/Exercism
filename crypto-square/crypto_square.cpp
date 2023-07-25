#include "crypto_square.h"
namespace crypto_square {


    std::string cipher::normalize_plain_text(){
        std::string output = "";
        for(size_t i=0; i < n_input.size(); i++){
            if(std::isalnum(n_input[i]) == 0){
                n_input.erase(i,1);
                i--;
            }
            else {
                n_input[i] = std::tolower(n_input[i]);
                output += n_input[i];
                }
            
        }
        return output;
    }

        void cipher::calculateColumnAndRow(std::string text){
        while(c*r < text.size()){
            if(c == r)
                c++;
            else r++;
        }

    }

    std::vector<std::string> cipher::plain_text_segments(){
        std::vector<std::string> output;
        
        normalize_plain_text();
        calculateColumnAndRow(n_input);
        
        std::string line;
        for(size_t i=0; i < n_input.size(); i += c){
            line = n_input.substr(i, c);
            output.push_back(line);
        }
        
        return output;
    }

     std::string cipher::cipher_text(){
                  std::string output;
        normalize_plain_text();
        calculateColumnAndRow(n_input);
       std::vector temp = plain_text_segments();
            

         for(size_t i =0; i < c; i++){
             for(size_t j=0; j < r; j++){
                 if(temp[j][i] != NULL){
                 output += temp[j][i];
                     }
             }
         }

        
        return output;
        }

    std::string cipher::normalized_cipher_text(){
   
        std::vector temp = plain_text_segments();
        std::string output = "";

         for(size_t i =0; i < c; i++){
             for(size_t j=0; j < r; j++){
                 if(temp[j][i] != NULL){
                 output += temp[j][i];
                     }
                 else{
                    output += " ";
                     }
             }
         }
        
        for(size_t i = r; i < output.size(); i = i + r){
            output.insert(i, " ");
            i++;
            
        }

        return output;
    }
   

}  // namespace crypto_square
  