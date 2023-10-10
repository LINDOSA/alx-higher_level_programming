

class ListNode:
    def __init__(self, value):
        self.value = value
        self.next = None
def reverse_linked_list(head):
    prev = None
    current = head

    while current:
        next_node = current.next
        current.next = prev
        prev = current
        current = next_node

    return prev

def is_palindrome(head):
	if not head or not head.next:

		return True

    slow = head
    fast = head

    while fast and fast.next:
        slow = slow.next
        fast = fast.next.next

    if fast:
        slow = slow.next

    reverse_head = reverse_linked_list(slow)
    current = head

    while reverse_head:
        if current.value != reverse_head.value:
            return False
        current = current.next
        reverse_head = reverse_head.next

    return True
