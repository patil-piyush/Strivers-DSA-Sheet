// Last updated: 8/7/2026, 7:10:15 PM
class Solution {
    public int[] deckRevealedIncreasing(int[] deck) {
        Deque<Integer> dq = new ArrayDeque<>();

        int size = deck.length;

        //step 1 - sort the deck
        Arrays.sort(deck);

        dq.addFirst(deck[size-1]);
        for(int i = (size-2); i>=0; i--){
            //a. remove the last(bottom) element from the queue (double ended)
            //b. add it to first
            dq.addFirst(dq.removeLast());
            // add the next card from deck
            dq.addFirst(deck[i]);
            //check if the deck is empty, if not pick the next card from the end and repeat the above until all the cards have been traversed and pushed into q
        }
        //perform deque operation on the double ended queue and store the popped elements in a array and return as result 
        int i=0;
        while(!dq.isEmpty()){
            deck[i++] = dq.remove();
        }
        return deck;
    }
}