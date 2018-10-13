import re
def getInput(card_ids):
    for id in card_ids:
        if validaCard(id):
            print("Valid")
        else:
            print("Invalid")


def validaCard(card_id):
    isVaid = False
    parten = re.compile(
        r"^"
        r"(?!.*(\d)(-?\1){3})"
        r"[456]"
        r"\d{3}"
        r"(?:-?\d{4}){3}"
        r"$")
    if parten.match(card_id):
        isVaid = True
    else:
        isVaid = False
    return isVaid


if __name__ == '__main__':
    no_of_lines = int(input())
    if no_of_lines < 0 or no_of_lines > 100:
        exit(1)
    else:
        lines = ''
        for i in range(int(no_of_lines)):
            lines += input() + "\n"

        cards = lines.split('\n')
        getInput(cards[:len(cards)-1])
