// Leetcode - 948 - Bag of Tokens

public int bagOfTokensScore(int[] tokens, int power) {
    Arrays.sort(tokens);
    int i = 0;
    int j = tokens.length - 1;
    int score = 0;
    int maxScore = 0;
    while(i <= j) {
        if(power >= tokens[i]) {
            power -= tokens[i++];
            score++;
            maxScore = Math.max(maxScore, score);
        } else if (score > 0) {
            score--;
            power += tokens[j--];
        } else {
            return maxScore;
        }
    }
    return maxScore;
}
