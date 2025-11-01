public class BinarySearch {
    public static void main(String[] args) {

    }

    public static int binarySearch(int[] arr, int target) {
        int start = 0;
        int end = arr.length - 1;
        while (start <= end) {
            int mid = end + ((end - start) / 2);
            if (arr[mid] == target) {
                return mid;
            } else if (arr[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }

    public static int firstOccurance(int[] arr, int target) {
        int start = 0;
        int end = arr.length - 1;
        int res = -1;
        while (start <= end) {
            int mid = end + ((end - start) / 2);
            if (arr[mid] == target) {
                res = mid;
                end = mid - 1;
            } else if (arr[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return res;
    }

    public static int lastOccurance(int[] arr, int target) {
        int start = 0;
        int end = arr.length - 1;
        int res = -1;
        while (start <= end) {
            int mid = end + ((end - start) / 2);
            if (arr[mid] == target) {
                res = mid;
                start = mid + 1;
            } else if (arr[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return res;
    }

    public static int findNoOfRotationInTheRotatedArray(int[] arr, int target) {
        // The index of the minimum element of the array
        int start = 0;
        int end = arr.length - 1;
        while (start <= end) {
            int mid = end + ((end - start) / 2);
            if (arr[mid] == target) {

            } else if (arr[mid] < target) {

            } else {

            }
        }
        return
    }

    public static int findElementInRotatedArray(int[] arr, int target) {
        int start = 0;
        int end = arr.length - 1;
        while (start <= end) {
            int mid = end + ((end - start) / 2);
            if (arr[mid] == target) {

            } else if (arr[mid] < target) {

            } else {

            }
        }
        return
    }

    public static int findInInfiniteElement(int[] arr, int target) {

    }

    public static int floorOfElement(int[] arr, int target) {
        int start = 0;
        int end = arr.length - 1;
        int res = -1;
        while (start <= end) {
            int mid = end + ((end - start) / 2);
            if (arr[mid] == target) {
                return arr[mid];
            } else if (arr[mid] < target) {
                start = mid + 1;
            } else {
                res = arr[mid];
                end = mid - 1;
            }
        }
        return res;
    }

    public static int ceilOfElement(int[] arr, int target) {
        int start = 0;
        int end = arr.length - 1;
        int res = -1;
        while (start <= end) {
            int mid = end + ((end - start) / 2);
            if (arr[mid] == target) {
                return arr[mid];
            } else if (arr[mid] < target) {
                res = arr[mid];
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return res;
    }

}