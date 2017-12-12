mergeInto(LibraryManager.library, {
  multiply_in_js: function(x,y) {
    document.getElementById("output_area").append("multiplying in js : " + x + " * " + y+ "\n\n");
    return x * y;
  },
});
