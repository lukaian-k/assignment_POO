```mermaid
classDiagram
	class Animal {
		-String name
		-String binomial_name
		-Vector~float~ height_and_weight
		-String descriptive_characteristics
		-float life_span
		-String extinction
		-Localization localization
		-Biologist biologist
		
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