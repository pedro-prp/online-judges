class Solution:
    def reverseVowels(self, s: str) -> str:

        vowels = ["a", "e", "i", "o", "u"]

        new_s = []
        vowels_found = []
        vowel_idx = 0

        vowels_found = [char for char in s if char.lower() in vowels]

        vowels_found.reverse()

        for idx, char in enumerate(s):
            if char.lower() in vowels:
                new_s.append(vowels_found[vowel_idx])
                vowel_idx += 1
                continue

            new_s.append(s[idx])

        return "".join(new_s)
