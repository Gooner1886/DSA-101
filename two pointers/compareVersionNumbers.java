// Leetcode - 165 - Compare Version Numbers
public int compareVersion(String version1, String version2) {
    String[] v1 = version1.split("\\."), v2 = version2.split("\\.");
    int len = Math.max(v1.length, v2.length);
    for(int i = 0; i < len; i++) {
        int n1 = i < v1.length ? Integer.parseInt(v1[i]) : 0;
        int n2 = i < v2.length ? Integer.parseInt(v2[i]) : 0;
        if(n1 == n2) {
            continue;
        }
        return n1 > n2 ? 1: -1;
    }
    return 0;
}
