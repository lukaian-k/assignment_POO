```mermaid
classDiagram
	Kingdom <|-- Phylum
	Phylum <|-- Classe
	Classe <|-- Order
	Order <|-- Family
	Family <|-- Genus
	Genus <|-- Species
	Species <|-- Animal
	Animal *-- Localization
	Animal *-- Biologist
	
	General_functions <|-- Kingdom
	General_functions <|-- Localization
	General_functions <|-- Biologist
	
	class Kingdom {
		-String name
		-String description
		
		+Kingdom()
		+Kingdom(String (*replace)(String, char, char), char before, char after)
		+get_name() String
		+get_description() String
		+set_name(String name) bool
		+set_description(String description) bool
		+all_search void
		+conversion_strings(String (*replace)(String, char, char), char before, char after) void
		+friend ostream &operator<<(ostream &os, const Kingdom &kingdom)
  		+friend istream &operator>>(istream &is, Kingdom &kingdom)
		}
	
	class Phylum {
		-String name
		-String distinctive_characteristics
		
		+Phylum()
		+Phylum(String (*replace)(String, char, char), char before, char after)
		+get_name() String
		+get_distinctive_characteristics() String
		+set_name(String name) bool
		+set_distinctive_characteristics(String distinctive_characteristics) bool
		+all_search void
		+conversion_strings(String (*replace)(String, char, char), char before, char after) void
		+friend ostream &operator<<(ostream &os, const Phylum &phylum)
  		+friend istream &operator>>(istream &is, Phylum &phylum)
		}
		
	class Classe {
		-String name
		-String description

		+Class()
		+Class(String (*replace)(String, char, char), char before, char after)
		+get_name() String
		+get_description() String
		+set_name(String name) bool
		+set_description(String description) bool
		+all_search void
		+conversion_strings(String (*replace)(String, char, char), char before, char after) void
		+friend ostream &operator<<(ostream &os, const Classe &classe)
  		+friend istream &operator>>(istream &is, Classe &classe)
		}
		
	class Order {
		-String name
		-String description

		+Order()
		+Order(String (*replace)(String, char, char), char before, char after)
		+get_name() String
		+get_description() String
		+set_name(String name) bool
		+set_description(String description) bool
		+all_search void
		+conversion_strings(String (*replace)(String, char, char), char before, char after) void
		+friend ostream &operator<<(ostream &os, const Order &order)
  		+friend istream &operator>>(istream &is, Order &order)
		}
	
	class Family {
		-String name
		-String description
		
		+Family()
		+Family(String (*replace)(String, char, char), char before, char after)
		+get_name() String
		+get_description() String
		+set_name(String name) bool
		+set_description(String description) bool
		+all_search void
		+conversion_strings(String (*replace)(String, char, char), char before, char after) void
		+friend ostream &operator<<(ostream &os, const Family &family)
  		+friend istream &operator>>(istream &is, Family &family)

		}
	
	class Genus {
		-String name
		-String aspects

		+Genus()
		+Genus(String (*replace)(String, char, char), char before, char after)
		+get_name() String
		+get_aspects() String
		+set_name(String name) bool
		+set_aspects(String aspects) bool
		+all_search void
		+conversion_strings(String (*replace)(String, char, char), char before, char after) void
		+friend ostream &operator<<(ostream &os, const Genus &genus)
  		+friend istream &operator>>(istream &is, Genus &genus)
		}
		
	class Species {
		-String name
		-String abbreviations
		-String category
		
		+Species()
		+Species(String (*replace)(String, char, char), char before, char after)
		+get_name() String
		+get_abbreviations() String
		+get_category() String
		+set_name(String name) bool
		+set_abbreviations(String abbreviations) bool
		+set_category(String category) bool
		+all_search void
		+conversion_strings(String (*replace)(String, char, char), char before, char after) void
		+friend ostream &operator<<(ostream &os, const Species &species)
  		+friend istream &operator>>(istream &is, Species &species)
		}
		
	class Animal {
		-String name
		-String binomial_name
		-String descriptive_characteristics
		-String extinction
		-Localization localization
		-Biologist biologist
		-bool is_active
		
		+Animal(String name)
		+get_name() String
		+get_binomial_name() String
		+get_descriptive_characteristics() String
		+get_conservation_state() String
		+get_is_active() bool
		+set_name(String name) bool
		+set_binomial_name(String binomial_name) bool
		+set_descriptive_characteristics(String descriptive_characteristics) bool
		+set_conservation_state(String acronym) bool
		+set_is_active() void
		+all_search(int number) void
		+minimum_search(int number) void
		+specify_search(string name, int number) bool
		+conversion_strings(string (*replace)(string, char, char), char before, char after) void
		+friend ostream &operator<<(ostream &os, const Animal &animal)
  		+friend istream &operator>>(istream &is, Animal &animal)
		}
		
	class Localization {
		-String geographical_distribution
		-String habitat
		-String discovery_point
		-String discovery_date
		
		+Localization()
		+get_geographical_distribution() String
		+get_habitat() String
		+get_discovery_point() String
		+get_discovery_date() String
		+set_geographical_distribution(String geographical_distribution) bool
		+set_habitat(String habitat) bool
		+set_discovery_point(String discovery_point) bool
		+set_discovery_date(String discovery_date) bool
		}

	class Biologist {
		-String name
		-String birth_date
		-String nationality
		-String gender
		
		+Biologist()
		+get_name() String
		+get_birth_data() String
		+get_nationality() String
		+get_gender() String
		+set_name(String name) bool
		+set_birth_data(String birth_date) bool
		+set_nationality(String nationality) bool
		+set_gender(String gender) bool
		}

	class CRUD {
		-int select
		-ALL = 1, MINIMUM, SPECIFY, BACK = 0 enum
		-bool is_valid = true
		-template <typename SEARCH> SEARCH _search()
		-void _proceed

		+add(ostream &fp) void
		+search(ostream &fp) void
		+update(ostream &fp) void
		+remove(ostream &fp) void
		+size() int
		+size(String name) int
		+replace(String word, char before, char after) String
	}

	class General_functions{
		#set_string(String &before, String after) bool
		#builder_string(String (*replace)(String, char, char), String text) String

	}
```



<!-- Referencia:
https://mermaid-js.github.io/mermaid/#/classDiagram?id=syntax

https://pt.wikipedia.org/wiki/Categoria:Fauna_da_Caatinga

https://www.infoescola.com/biomas/fauna-da-caatinga/#:~:text=Merecem%20destaque%20esp%C3%A9cies%20amea%C3%A7adas%20de
-->