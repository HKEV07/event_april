
def get_pokemon_info(pokemon_name):
    response = requests.get(f'https://pokeapi.co/api/v2/pokemon/{pokemon_name}')
    if response.status_code == 200:
        data = response.json()
        abilities = []
        for ability in data['abilities']:
            abilities.append(ability['ability']['name'])
        return abilities
    else:
        return None

pokemon_name = input('Enter the name of a Pokemon: ')
abilities = get_pokemon_info(pokemon_name)
if abilities:
    print(f"{pokemon_name}'s abilities are: {', '.join(abilities)}")
else:
    print('Pokemon not found.')