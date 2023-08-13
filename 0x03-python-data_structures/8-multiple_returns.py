#!/usr/bin/python3

def multiple_returns(sentence):
    # Check if the input sentence is empty or None
    if not sentence:
        # If the sentence is empty or None, set it to None
        sentence = None
    # Check if the sentence is not empty
    if sentence:
        # If the sentence is not empty, get its length
        sen_len = len(sentence)
    else:
        # If the sentence is empty, set the length to 0
        sen_len = 0
    # Return a tuple with the sentence length and the first character of the sentence (or None if the sentence is empty)
    return (sen_len, sentence if not sentence else sentence[:1])
