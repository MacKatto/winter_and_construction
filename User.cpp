#include <iostream>
#include <string>

//
// Author: Pia Lad
// Date: October 31 2026
// Desc:
//
//
 class User {
 private:
     std::string name;
     std::string id;
     std::string username;
     std:: string password;
 public:
     User(const std::string& name, std::string id,std::string username, std::string password) {
         this->name = name;
         this->id = id;
         this->username = username;
         this->password = password;
     }

     std::string getName() const {
         return name;
     }

     void setName(const std::string &name) {
         this->name = name;
     }

     std::string getID() const {
         return id;
     }

     void setId(const std::string &id) {
         this->id = id;
     }

     std::string getUsername() const {
         return username;
     }

     void setUsername(const std::string &username) {
         this->username = username;
     }

      std::string getPassword() const {
         return password;
     }

     void setPassword(const std::string &password) {
         this->password = password;
     }
 };