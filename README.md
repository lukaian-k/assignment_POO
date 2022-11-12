```mermaid
classDiagram
	Kingdom <|-- Phylum
	Phylum <|-- Class
	Class <|-- Order
	Order <|-- Family
	Family <|-- Genus
	Genus <|-- Species
	Species <|-- Animal
	Animal *-- Localization
	Animal *-- Biologist
	
	class Kingdom {
		-String kingdom_name
		-String description
		
		+Kingdom(String kingdom_name)
		+get_kingdom_name()
		+get_description()
		+set_kingdom_name() bool
		+set_description() bool
		}
	
	class Phylum {
		-String phylum_name
		-String meaning
		-String common_name
		-String distinctive_characteristics
		
		+Phylum(String phylum_name)
		+get_phylum_name() String
		+get_meaning() String
		+get_common_name() String
		+get_distinctive_characteristics() String
		+set_phylum_name(String phylum_name) bool
		+set_meaning(String meaning) bool
		+set_common_name(String common_name) bool
		+set_distinctive_characteristics(String distinctive_characteristics) bool
		}
		
	class Class {
		-String class_name
		-String description

		+Class(string class_name)
		+get_class_name() : String
		+get_description() : String
		+set_class_name(String class_name) bool
		+set_description(String description) bool
		}
		
	class Order {
		-String order_name
		-String description

		+Order(string order_name)
		+get_order_name() : String
		+get_description() : String
		+set_order_name(String order_name) bool
		+set_description(String description) bool
		}
	
	class Family {
		-String family_name
		-String description
		
		+Family(string family_name, string description)
		+get_family_name() String
		+get_description() String
		+set_family_name(String family_name) bool
		+set_description(String description) bool
		}
	
	class Genus {
		-String genus_name
		-String genus_aspects

		+Genus(String genus_name)
		+get_genus_name() : String
		+get_genus_aspects() : String
		+set_genus_name(String genus_name) : bool
		+set_genus_aspects(String genus_aspects) : bool
		}
		
	class Species {
		-String species_name
		-String abbreviations
		-String species_category
		
		+Species(String species_name)
		+get_species_name() String
		+get_abbreviations() String
		+get_species_category() String
		+set_species_name(String species_name) bool
		+set_abbreviations(String abbreviations) bool
		+set_species_category(String species_category) bool
		}
		
	class Animal {
		-String name
		-String binomial_name
		-Vector~float~ height_and_weight
		-String descriptive_characteristics
		-float life_span
		-String extinction
		-Localization localization
		-Biologist biologist
		
		+Animal(String name)
		+get_name() String
		+get_binomial_name() String
		+get_height_and_weight() Vector
		+get_descriptive_characteristics() String
		+get_life_span() float
		+get_conservation_state() String
		+set_name(String name) bool
		+set_binomial_name(String binomial_name) bool
		+set_height_and_weight(Vector~float~ height_and_weight) bool
		+set_descriptive_characteristics(String descriptive_characteristics) bool
		+set_life_span(int life_span) bool
		+set_conservation_state(String acronym) bool
		}
		
	class Localization {
		-String geographical_distribution
		-String habitat
		-String discovery_point
		-Vector~int~ discovery_date
		
		+Localization()
		+get_geographical_distribution() String
		+get_habitat() String
		+get_discovery_point() String
		+get_discovery_date() Vector~int~
		+set_geographical_distribution(String geographical_distribution) bool
		+set_habitat(String habitat) bool
		+set_discovery_point(String discovery_point) bool
		+set_discovery_date(Vector~int~ discovery_date) bool
		}

	class Biologist {
		-String name
		-Vector~int~ birth_data
		-String nationality
		-String gender
		
		+Biologist()
		+get_name() String
		+get_birth_data() Vector~int~
		+get_nationality() String
		+get_gender() String
		+set_name(String name) bool
		+set_birth_data(Vector~int~ birth_data) bool
		+set_nationality(String nationality) bool
		+set_gender(String gender) bool
		}
```


<!-- Referencia:
https://mermaid-js.github.io/mermaid/#/classDiagram?id=syntax

https://pt.wikipedia.org/wiki/Categoria:Fauna_da_Caatinga

https://www.infoescola.com/biomas/fauna-da-caatinga/#:~:text=Merecem%20destaque%20esp%C3%A9cies%20amea%C3%A7adas%20de
-->