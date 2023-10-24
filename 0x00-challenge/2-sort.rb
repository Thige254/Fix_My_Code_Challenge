# Sorts the integer arguments in ascending order.
# First i will initialize an empty array to store the integers.
integers = []

# Then i will iterate over each argument.
ARGV.each do |arg|
    # Here i can add the argument to the array if it's an integer.
    integers << arg.to_i if arg =~ /^-?\d+$/
end
# Lastly... the sorting...i will sort and print the integers. Duh. Done!.
puts integers.sort
