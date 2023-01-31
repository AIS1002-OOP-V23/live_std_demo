#include <iostream>
#include <unordered_map>
#include <vector>

class Person {

public:
    explicit Person(const std::string &name) : name(name) {}

    const std::string &getName() const {
        return name;
    }

private:
    std::string name;
};

// pretend we read some file to get the persons
std::vector<Person> readFile() {
    return std::vector<Person> {
            Person("Nils"),
            Person("Olaf"),
            Person("Nils"),
            Person("Ole"),
            Person("Jenny"),
            Person("Jenny")

    };
}

int main() {
    
    std::unordered_map<std::string, std::vector<Person>> m;

    m["Per"]; //default construct a value for key

    if (m.count("Per")) { // true if map contains a key "Per"
        auto value = m.at("Per"); //safe
    }
    
    auto persons = readFile();
    for (const Person& p : persons) {
        m[p.getName()].emplace_back(p);
    }

    auto& personsWithNameNils = m["Nils"];

    return 0;
}
