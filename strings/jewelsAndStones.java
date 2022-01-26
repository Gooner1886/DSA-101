// Leetcode - 771 - Jewels and Stones
public int numJewelsInStones(String jewels, String stones) {
    HashSet<Character> jewel = new HashSet<Character>();
    int noOfJewels = 0;
    for(char ch: jewels.toCharArray()) {
        jewel.add(ch);
    }
    
    for(char ch: stones.toCharArray()) {
        if(jewel.contains(ch)) {
            noOfJewels++;
        }
    }
    return noOfJewels;
}
