#include <iostream> 
#include <cstring> 

int main()
{
    std::cout << "ਉਸ ਵਿਅਕਤੀ ਦਾ ਨਾਂ ਲਿੱਖੋ, ਜਿਸ ਨੂੰ ਤੁਸੀ ਚਿੱਠੀ ਪਾਉਣਾ ਚਾਹੁੰਦੇ ਹੋ: ";
    // first_name ਦਾ ਮਤਲਬ ਕਿਸੀ ਵਿਅਕਤੀ ਦਾ ਪਹਿਲਾ ਨਾਂ ਹੈ। ਜਿਵੇਂ ਕਿ ਭਗਤ ਸਿੰਘ ਦਾ 
    // ਦਾ ਪਹਿਲਾ ਨਾਮ ਭਗਤ ਹੈ ਅਤੇ ਆਖਰੀ (ਜਾਂ ਵਿਚਲਾ) ਨਾਂ ਸਿੰਘ। 
    std::string first_name; 
    std::cin >> first_name; 
    std::cout << "ਪਿਆਰੇ  " << first_name << ",\n"; 
    std::cout << "\tਤੇਰੇ ਕੀ ਹਾਲ-ਚਾਲ ਹਨ? ਮੈਂ ਠੀਕ ਹਾਂ ਅਤੇ ਤੈਨੂੰ ਅਕਸਰ ਯਾਦ ਕਰਦਾ ਹਾਂ। "
              << "ਇਸ ਗਲ ਦੀ ਉਮੀਦ ਕਰਦਾ ਹਾਂ ਕਿ ਇਹ ਚਿੱਠੀ ਤੇਰੇ ਤਕ ਜ਼ਰੂਰ ਪਹੁੰਚੇਗੀ।\n";
    std::cout << "\tਕੀ ਤੈਨੂੰ ਯਾਦ ਹੈ ਕਿ ਜਦੋਂ ਅਸੀ ਕਾਲਜ ਵਿਚ ਪੜ੍ਹਦੇ ਸੀ, ਤਾਂ ਸਾਡੇ ਨਾਲ "
              << "ਇੱਕ ਹੋਰ ਮੁੰਡਾ ਵੀ ਪੜ੍ਹਦਾ ਹੁੰਦਾ ਸੀ। ਉਹ ਬਥੇਰੀਆਂ ਕਿਤਾਬਾਂ ਪੜ੍ਹਿਆ ਕਰਦਾ "
              << "ਸੀ ਅਤੇ ਪਟਿਆਲੇ ਦੇ ਕਿਸੇ ਨੇੜਲੇ ਪਿੰਡ ਤੋਂ ਸਪਲੈਨਡਰ 'ਤੇ ਆਉਂਦਾ ਸੀ। "
              << "ਕੀ ਤੈਨੂੰ ਉਸਦਾ ਨਾਂ ਯਾਦ ਹੈ? ਜੇ ਹਾਂ, ਤਾਂ ਫਿਰ ਲਿੱਖ ਦੇ: ";
    // ਉਸ ਦੋਸਤ ਦਾ ਨਾਮ friend_name ਵੇਰੀਏਬਨ ਵਿਚ ਸਟੋਰ ਹੋਵੇਗਾ। 
    std::string friend_name; 
    std::cin >> friend_name; 
    std::cout << "ਸਹੀ! ਲੇਕਿਨ ਕੀ ਤੂੰ " << friend_name << " ਨੂੰ ਅੱਜਕਲ੍ਹ ਵੇਖਿਆ ਹੈ?\n"; 
    
    return 0;
}
