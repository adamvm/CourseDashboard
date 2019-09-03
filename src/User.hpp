#pragma once
#include <string>
#include <sstream>
#include <iomanip>
#include "../external/nlohmann/json.hpp"

class User
{
public:
    User(const std::string & name,
         const std::string & nick,
         const std::string & group,
         const std::string & gitHub,
         const std::string & firecode);

    User(nlohmann::json userJson);
   
    std::string getAllInfo() const;
    nlohmann::json toJson() const;

    void setName(std::string name);
    void setNick(std::string nick);
    void setGroup(std::string group);
    void setGitHub(std::string gitHub);
    void setFirecode(std::string firecode);
    std::string getNick() const;

    std::string getName() const;
    std::string getGroup() const;
    std::string getGitHub() const;
    std::string getFirecode() const;

private:

    std::string name_;
    std::string nick_;
    std::string group_;
    std::string gitHub_;
    std::string firecode_;  

};

using Users = std::vector<User>;
